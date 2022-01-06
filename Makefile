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

ifeq ($(VERBOSE),0)
  QUIET := @
endif

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

NAME := pikmin2
VERSION := usa
#VERSION := usa.demo

BUILD_DIR := build/$(NAME).$(VERSION)

# Inputs
S_FILES := $(wildcard asm/*.s)
C_FILES := $(wildcard src/*.c)
CPP_FILES := $(wildcard src/*.cpp)
CPP_FILES += $(wildcard src/*.cp)
LDSCRIPT := $(BUILD_DIR)/ldscript.lcf
READMEGEN := tools/UpdateReadme.exe

# Outputs
DOL     := $(BUILD_DIR)/main.dol
ELF     := $(DOL:.dol=.elf)
MAP     := $(BUILD_DIR)/pikmin2UP.MAP

ifeq ($(MAPGENFLAG),1)
  MAPGEN := -map $(MAP)
endif

include obj_files.mk

O_FILES :=	$(GROUP_0_FILES) $(JSYSTEM) $(DOLPHIN)\
			$(YAMASHITA) $(KANDO) $(NISHIMURA) $(OGAWA) $(HIKINO) $(MORIMURA) $(EBISAWA) $(KONO)\
			$(BOOTUP) $(COMMON) $(GC) $(UTILITY)

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
else
  WINE ?= wine
  AS      := $(DEVKITPPC)/bin/powerpc-eabi-as
  CPP     := $(DEVKITPPC)/bin/powerpc-eabi-cpp -P
endif
CC      = $(WINE) tools/mwcc_compiler/$(MWCC_VERSION)/mwcceppc.exe
LD      := $(WINE) tools/mwcc_compiler/$(MWLD_VERSION)/mwldeppc.exe
ELF2DOL := tools/elf2dol
SHA1SUM := sha1sum
PYTHON  := python3

# Options
INCLUDES := -i include/
ASM_INCLUDES := -I include/

ASFLAGS := -mgekko $(ASM_INCLUDES)
ifeq ($(VERBOSE),1)
# this set of LDFLAGS outputs warnings.
LDFLAGS := $(MAPGEN) -fp hard -nodefaults
endif
ifeq ($(VERBOSE),0)
# this set of LDFLAGS generates no warnings.
LDFLAGS := $(MAPGEN) -fp hard -nodefaults -w off
endif
CFLAGS   = -Cpp_exceptions off -enum int -inline auto -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -sdata 8 -sdata2 8 -nodefaults $(INCLUDES)

ifeq ($(VERBOSE),0)
# this set of ASFLAGS generates no warnings.
ASFLAGS += -W
endif

$(BUILD_DIR)/src/Dolphin/dvdFatal.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/dvderror.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/dvderror.o: CFLAGS += -inline off
$(BUILD_DIR)/src/Dolphin/__start.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/OSLink.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/PPCArch.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/vec.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/GDBase.o: MWCC_VERSION := 1.0

# Dirty hack to overwrite sdata
$(BUILD_DIR)/src/Dolphin/main_TRK.o: CFLAGS += -sdata 0

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

### Default target ###

default: all

all: $(DOL)

ALL_DIRS := $(sort $(dir $(O_FILES)))

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

.PHONY: tools

$(LDSCRIPT): ldscript.lcf
	$(QUIET) $(CPP) -MMD -MP -MT $@ -MF $@.d -I include/ -I . -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(DOL): $(ELF) | tools
	$(QUIET) $(ELF2DOL) $< $@
	$(QUIET) $(SHA1SUM) -c sha1/$(NAME).$(VERSION).sha1
ifneq ($(findstring -map,$(LDFLAGS)),)
	$(QUIET) $(PYTHON) tools/calcprogress.py $@
endif
	./$(READMEGEN)

clean:
	rm -f -d -r build
	$(MAKE) -C tools clean

tools:
	$(MAKE) -C tools

$(ELF): $(O_FILES) $(LDSCRIPT)
	@echo Linking ELF $@
	$(QUIET) @echo $(O_FILES) > build/o_files
	$(QUIET) $(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) @build/o_files

$(BUILD_DIR)/%.o: %.s
	@echo Assembling $<
	$(QUIET) $(AS) $(ASFLAGS) -o $@ $<
	
$(BUILD_DIR)/%.o: %.c
	@echo "Compiling " $<
	$(QUIET) $(CC) $(CFLAGS) -c -o $@ $<

$(BUILD_DIR)/%.o: %.cp
	@echo "Compiling " $<
	$(QUIET) $(CC) $(CFLAGS) -c -o $@ $<

$(BUILD_DIR)/%.o: %.cpp
	@echo "Compiling " $<
	$(QUIET) $(CC) $(CFLAGS) -c -o $@ $<

### Debug Print ###

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
