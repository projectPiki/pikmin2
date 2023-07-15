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
VERSION ?= usa
#VERSION := usa.demo

ifeq ($(VERSION), usa)
    VERNUM = 2
else ifeq ($(VERSION), usa.demo)
    VERNUM = 1
else
    VERNUM = 0
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

# Programs
ifeq ($(WINDOWS),1)
  WINE :=
  AS      := $(DEVKITPPC)/bin/powerpc-eabi-as.exe
  CPP     := $(DEVKITPPC)/bin/powerpc-eabi-cpp.exe -P
  PYTHON  := python
else
  WIBO   := $(shell command -v wibo 2> /dev/null)
  ifdef WIBO
    WINE ?= wibo
  else
    WINE ?= wine
  endif
  # Disable wine debug output for cleanliness
  export WINEDEBUG ?= -all
  # Default devkitPPC path
  DEVKITPPC ?= /opt/devkitpro/devkitPPC
  AS      := $(DEVKITPPC)/bin/powerpc-eabi-as
  CPP     := $(DEVKITPPC)/bin/powerpc-eabi-cpp -P
  PYTHON  := python3
endif
COMPILERS ?= tools/mwcc_compiler
CC      = $(WINE) $(COMPILERS)/$(MWCC_VERSION)/mwcceppc.exe
LD      := $(WINE) $(COMPILERS)/$(MWLD_VERSION)/mwldeppc.exe
DTK     := tools/dtk
ELF2DOL := $(DTK) elf2dol
SHASUM  := $(DTK) shasum

ifneq ($(WINDOWS),1)
TRANSFORM_DEP := tools/transform-dep.py
else
TRANSFORM_DEP := tools/transform-win.py
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
CFLAGS  := -Cpp_exceptions off -enum int -inline auto -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -common on -sdata 8 -sdata2 8 -nodefaults -MMD -DVERNUM=$(VERNUM) $(INCLUDES)

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

$(LDSCRIPT): ldscript.lcf
	$(QUIET) $(CPP) -MMD -MP -MT $@ -MF $@.d -I include/ -I . -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(DOL): $(ELF) | $(DTK)
	$(QUIET) $(ELF2DOL) $< $@
	$(QUIET) $(SHASUM) -c sha1/$(NAME).$(VERSION).sha1
ifneq ($(findstring -map,$(LDFLAGS)),)
	$(QUIET) $(PYTHON) tools/calcprogress.py $(DOL) $(MAP)
endif
ifeq ($(USE_AOI),1)
	$(WINE) ./aoi.exe
endif

clean:
	rm -f -d -r build

$(DTK): tools/dtk_version
	@echo "Downloading $@"
	$(QUIET) $(PYTHON) tools/download_dtk.py $< $@

# ELF creation makefile instructions
$(ELF): $(O_FILES) $(LDSCRIPT)
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

$(BUILD_DIR)/%.o: %.s
	@echo Assembling $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(AS) $(ASFLAGS) -o $@ $<

# for files with capitalized .C extension
$(BUILD_DIR)/%.o: %.C
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

$(BUILD_DIR)/%.o: %.c
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

$(BUILD_DIR)/%.o: %.cp
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

$(BUILD_DIR)/%.o: %.cpp
	@echo "Compiling " $<
	$(QUIET) mkdir -p $(dir $@)
	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $<

### Extremely lazy recipes for generating context ###
# Example usage: make build/pikmin2.usa/src/plugProjectYamashitaU/farmMgr.h
$(BUILD_DIR)/%.h: %.c
	@echo "Compiling and generating context for " $<
	$(QUIET) $(CC) $(CFLAGS) -E -c -o $@ $<

$(BUILD_DIR)/%.h: %.cp
	@echo "Compiling and generating context for " $<
	$(QUIET) $(CC) $(CFLAGS) -E -c -o $@ $<
	
$(BUILD_DIR)/%.h: %.cpp
	@echo "Compiling and generating context for " $<
	$(QUIET) $(CC) $(CFLAGS) -E -c -o $@ $<

### Debug Print ###

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
