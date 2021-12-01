ifneq ($(findstring MINGW,$(shell uname)),)
  WINDOWS := 1
endif
ifneq ($(findstring MSYS,$(shell uname)),)
  WINDOWS := 1
endif

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

NAME := pikmin2
VERSION := usa
#VERSION := usa.demo

BUILD_DIR := build/$(NAME).$(VERSION)

SRC_DIRS := $(shell find src/ -type f -name '*.c')
SRC_DIRS += $(shell find src/ -type f -name '*.cp')
SRC_DIRS += $(shell find src/ -type f -name '*.cpp')
ASM_DIRS := $(shell find asm/ -type f -name '*.s')

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

# POSTPROC := tools/postprocess.py

# Options
INCLUDES := -i include/

ASFLAGS := -mgekko -I include/ 
# this set of LDFLAGS generates a mapfile and makes linking take several minutes.
# LDFLAGS := -map $(MAP) -fp hard -nodefaults
# this set of LDFLAGS is faster, but does not generate a mapfile.
# LDFLAGS := -fp hard -nodefaults
# this set of LDFLAGS is faster, but does not generate a mapfile. Generates no warnings.
LDFLAGS := -fp hard -nodefaults -w off
CFLAGS  := -Cpp_exceptions off -inline auto -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -sdata 8 -sdata2 8 -nodefaults -msgstyle gcc $(INCLUDES)

# for postprocess.py
# PROCFLAGS := -fsymbol-fixup

$(BUILD_DIR)/src/Dolphin/dvdFatal.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/__start.o: MWCC_VERSION := 1.0
$(BUILD_DIR)/src/Dolphin/OSLink.o: MWCC_VERSION := 1.0

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

### Default target ###

default: all

all: $(DOL)

ALL_DIRS := build $(BUILD_DIR) $(addprefix $(BUILD_DIR)/,$(SRC_DIRS) $(ASM_DIRS))

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

.PHONY: tools

$(LDSCRIPT): ldscript.lcf
	$(CPP) -MMD -MP -MT $@ -MF $@.d -I include/ -I . -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(DOL): $(ELF) | tools
	$(ELF2DOL) $< $@
	$(SHA1SUM) -c sha1/$(NAME).$(VERSION).sha1
ifneq ($(findstring -map,$(LDFLAGS)),)
	$(PYTHON) calcprogress.py $@
endif
	./$(READMEGEN)

clean:
	rm -f -d -r build
	$(MAKE) -C tools clean

tools:
	$(MAKE) -C tools

$(ELF): $(O_FILES) $(LDSCRIPT)
	@echo $(O_FILES) > build/o_files
	$(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) @build/o_files

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<
	
$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

### Debug Print ###

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
