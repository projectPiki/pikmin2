ifneq ($(findstring MINGW,$(shell uname)),)
  WINDOWS := 1
endif
ifneq ($(findstring MSYS,$(shell uname)),)
  WINDOWS := 1
endif

# If 0, tells the console to chill out. (Quiets the make process.)
VERBOSE ?= 0

# If MAPGENFLAG set to 1, tells LDFLAGS to generate a mapfile, which makes linking take several minutes.
MAPGENFLAG ?= 0

# Use the all-in-one updater after successful build? (Fails on non-windows platforms)
USE_AOI ?= 0

ifeq ($(VERBOSE),0)
  QUIET := @
endif

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

NAME := pikmin2
VERSION ?= GPVE01
#VERSION := GPVE01_D17

# only GPVE01 and GPVE01_D17 are implemented right now --EpochFlame

ifeq ($(VERSION), GPVE01)
    VERNUM = 4
else ifeq ($(VERSION), GPVE01_D17)
    VERNUM = 0
else ifeq ($(VERSION), GPVE01_D18)
    VERNUM = 1
else ifeq ($(VERSION), GPVJ01)
    VERNUM = 2
else ifeq ($(VERSION), GPVP01)
    VERNUM = 3
# default to usa retail
else
    VERNUM = 4
endif

# Use the all-in-one updater after successful build? (Fails on non-windows platforms)
ifeq ($(USE_AOI), 1)
  ifeq ($(WINDOWS), 1)
  USE_AOI = 1
  else
  @echo "aoi.exe fails on non-windows platforms."
  USE_AOI = 0
  endif
else
USE_AOI = 0
endif

BUILD_DIR := build/$(NAME).$(VERSION)

# Inputs
S_FILES := $(wildcard asm/*.s)
C_FILES := $(wildcard src/*.c)
CPP_FILES := $(wildcard src/*.cpp)
CPP_FILES += $(wildcard src/*.cp)
LDSCRIPT := $(BUILD_DIR)/ldscript.lcf
AOI := aoi.exe

# Outputs
DOL     := $(BUILD_DIR)/main.dol
ELF     := $(DOL:.dol=.elf)
MAP     := $(BUILD_DIR)/pikmin2UP.MAP

ifeq ($(MAPGENFLAG),1)
  MAPGEN := -map $(MAP)
endif

include obj_files.mk

O_FILES :=	$(JSYSTEM) $(DOLPHIN) $(PLUGPROJECT) $(SYS) $(UTILITY)
DEPENDS := $($(filter *.o,O_FILES):.o=.d)
DEPENDS += $($(filter *.o,E_FILES):.o=.d)
# If a specific .o file is passed as a target, also process its deps
DEPENDS += $(MAKECMDGOALS:.o=.d)

#-------------------------------------------------------------------------------
# Tools
#-------------------------------------------------------------------------------

MWCC_VERSION := 2.6
MWLD_VERSION := 2.6

# Tool versions (keep in sync with configure.py)
BINUTILS_TAG  := 2.42-1
COMPILERS_TAG := 20240706
DTK_TAG       := v0.9.4
SJISWRAP_TAG  := v1.1.1
WIBO_TAG      := 0.6.11

# Programs
BINUTILS  ?= build/binutils
COMPILERS ?= build/compilers
DTK       ?= build/tools/dtk
SJISWRAP  ?= build/tools/sjiswrap.exe
WIBO      ?= build/tools/wibo
ifeq ($(WINDOWS),1)
  WRAPPER :=
  AS      := $(BINUTILS)/powerpc-eabi-as.exe
  PYTHON  := python
else
  WRAPPER := $(WIBO)
  AS      := $(BINUTILS)/powerpc-eabi-as
  PYTHON  := python3
endif
CC  = $(WRAPPER) $(SJISWRAP) $(COMPILERS)/GC/$(MWCC_VERSION)/mwcceppc.exe
LD := $(WRAPPER) $(COMPILERS)/GC/$(MWLD_VERSION)/mwldeppc.exe

ifneq ($(WINDOWS),1)
TRANSFORM_DEP := tools/transform_dep.py
else
TRANSFORM_DEP := tools/transform_win.py
endif

# Options
INCLUDES := -i include/ -i include/stl/
ASM_INCLUDES := -I include/

ASFLAGS := -mgekko $(ASM_INCLUDES) --defsym version=$(VERNUM)
ifeq ($(VERBOSE),1)
# this set of LDFLAGS outputs warnings.
LDFLAGS := $(MAPGEN) -fp hard -nodefaults
endif
ifeq ($(VERBOSE),0)
# this set of LDFLAGS generates no warnings.
LDFLAGS := $(MAPGEN) -fp hard -nodefaults -w off
endif
LIBRARY_LDFLAGS := -nodefaults -fp hard -proc gekko
CFLAGS  := -Cpp_exceptions off -enum int -inline auto -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -common on -multibyte -sdata 8 -sdata2 8 -nodefaults -MMD -DVERNUM=$(VERNUM) $(INCLUDES)

ifeq ($(VERBOSE),0)
# this set of ASFLAGS generates no warnings.
ASFLAGS += -W
# this set of CFLAGS generates no warnings.
CFLAGS += -w off
endif

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

### Default target ###

default: all

all: $(DOL)

ALL_DIRS := $(sort $(dir $(O_FILES)))

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

LDSCRIPT := ldscript.lcf

$(DOL): $(ELF) | $(DTK)
	$(QUIET) $(DTK) elf2dol $< $@
	$(QUIET) $(DTK) shasum -c sha1/$(NAME).$(VERSION).sha1
ifneq ($(findstring -map,$(LDFLAGS)),)
	$(QUIET) $(PYTHON) tools/calcprogress.py $(DOL) $(MAP)
endif
ifeq ($(USE_AOI),1)
	./aoi.exe
endif

clean:
	rm -f -d -r build

$(DTK):
	@echo "Downloading $@"
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(PYTHON) tools/download_tool.py dtk $@ --tag $(DTK_TAG)

$(SJISWRAP):
	@echo "Downloading $@"
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(PYTHON) tools/download_tool.py sjiswrap $@ --tag $(SJISWRAP_TAG)

$(BINUTILS):
	@echo "Downloading $@"
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(PYTHON) tools/download_tool.py binutils $@ --tag $(BINUTILS_TAG)

$(COMPILERS):
	@echo "Downloading $@"
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(PYTHON) tools/download_tool.py compilers $@ --tag $(COMPILERS_TAG)

$(WIBO):
	@echo "Downloading $@"
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(PYTHON) tools/download_tool.py wibo $@ --tag $(WIBO_TAG)

# ELF creation makefile instructions
$(ELF): $(O_FILES) $(LDSCRIPT) $(WRAPPER) $(COMPILERS)
	@echo Linking ELF $@
	$(QUIET) @echo $(O_FILES) > build/o_files
	$(QUIET) $(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) @build/o_files

%.d.unix: %.d $(TRANSFORM_DEP)
	@echo Processing $<
	$(QUIET) $(PYTHON) $(TRANSFORM_DEP) $< $@

-include include_link.mk

DEPENDS := $(DEPENDS:.d=.d.unix)
ifneq ($(MAKECMDGOALS), clean)
-include $(DEPENDS)
endif

$(BUILD_DIR)/%.o: %.s | $(BINUTILS) $(DTK)
	@echo Assembling $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(AS) $(ASFLAGS) -o $@ $<
	$(QUIET) $(DTK) elf fixup $@ $@

$(BUILD_DIR)/%.o: %.c | $(WRAPPER) $(COMPILERS) $(SJISWRAP)
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

$(BUILD_DIR)/%.o: %.C | $(WRAPPER) $(COMPILERS) $(SJISWRAP)
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

$(BUILD_DIR)/%.o: %.cp | $(WRAPPER) $(COMPILERS) $(SJISWRAP)
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

$(BUILD_DIR)/%.o: %.cpp | $(WRAPPER) $(COMPILERS) $(SJISWRAP)
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

### Debug Print ###

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
