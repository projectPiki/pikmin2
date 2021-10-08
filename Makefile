ifneq ($(findstring MINGW,$(shell uname)),)
  WINDOWS := 1
endif
ifneq ($(findstring MSYS,$(shell uname)),)
  WINDOWS := 1
endif

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

TARGET_COL := gc

NAME := pikmin2
VERSION := usa
#VERSION := usa.demo

BUILD_DIR := build/$(NAME).$(VERSION)

SRC_DIRS := src src/Dolphin src/JSystem src/sysBootupU src/sysCommonU src/sysGCU \
			src/plugProjectEbisawaU src/plugProjectHikinoU src/plugProjectKandoU \
			src/plugProjectKonoU src/plugProjectMorimuraU src/plugProjectNishimuraU \
			src/plugProjectOgawaU src/plugProjectYamashitaU src/utilityU src/Dolphin/ddh \
			src/JSystem/dsp src/JSystem/fvb src/JSystem/J2D src/JSystem/J3D src/JSystem/JAD \
			src/JSystem/JAI src/JSystem/JAL src/JSystem/JAS src/JSystem/JAU \
			src/JSystem/JFW src/JSystem/JKR src/JSystem/JMath src/JSystem/JPA \
			src/JSystem/JSG src/JSystem/jstudio src/JSystem/JSU src/JSystem/JUT \
			src/JSystem/object src/JSystem/stb src/JSystem/std
			
ASM_DIRS := asm asm/Dolphin asm/JSystem asm/sysCommonU asm/sysGCU \
			asm/plugProjectEbisawaU asm/plugProjectHikinoU asm/plugProjectKandoU \
			asm/plugProjectKonoU asm/plugProjectMorimuraU asm/plugProjectNishimuraU \
			asm/plugProjectOgawaU asm/plugProjectYamashitaU asm/utilityU asm/Dolphin/ddh \
			asm/JSystem/dsp asm/JSystem/fvb asm/JSystem/J2D asm/JSystem/J3D \
			asm/JSystem/JAI asm/JSystem/JAL asm/JSystem/JAS asm/JSystem/JAU \
			asm/JSystem/JFW asm/JSystem/JKR asm/JSystem/JMath asm/JSystem/JPA \
			asm/JSystem/JSG asm/JSystem/jstudio asm/JSystem/JSU asm/JSystem/JUT \
			asm/JSystem/object asm/JSystem/stb asm/JSystem/std
# Inputs
S_FILES := $(wildcard asm/*.s)
C_FILES := $(wildcard src/*.c)
CPP_FILES := $(wildcard src/*.cpp)
LDSCRIPT := $(BUILD_DIR)/ldscript.lcf
PATCHLINKER := patch_linker.sh

# Outputs
DOL     := $(BUILD_DIR)/main.dol
ELF     := $(DOL:.dol=.elf)
MAP     := $(BUILD_DIR)/pikmin2.map

include obj_files.mk

O_FILES := $(GROUP_0_FILES) $(TEXT_O_FILES) $(GROUP_1_FILES) $(TEXT_PART_TWO) $(GROUP_2_FILES)

#-------------------------------------------------------------------------------
# Tools
#-------------------------------------------------------------------------------

MWCC_VERSION := 2.6
MWLD_VERSION := 2.7e

# Programs
ifeq ($(WINDOWS),1)
  WINE :=
  AS      := $(DEVKITPPC)/bin/powerpc-eabi-as.exe
  OBJCOPY := $(DEVKITPPC)/bin/powerpc-eabi-objcopy.exe
  CPP     := $(DEVKITPPC)/bin/powerpc-eabi-cpp.exe -P
else
  WINE := wine
  AS      := $(DEVKITPPC)/bin/powerpc-eabi-as
  OBJCOPY := $(DEVKITPPC)/bin/powerpc-eabi-objcopy
  CPP     := $(DEVKITPPC)/bin/powerpc-eabi-cpp -P
endif
CC      = $(WINE) tools/mwcc_compiler/$(MWCC_VERSION)/mwcceppc.exe
LD      := $(WINE) tools/mwcc_compiler/$(MWLD_VERSION)/mwldeppc.exe
ELF2DOL := tools/elf2dol
SHA1SUM := sha1sum
PYTHON  := python

POSTPROC := tools/postprocess.py

# Options
INCLUDES := -i include/

ASFLAGS := -mgekko -I include/ 
LDFLAGS := -map $(MAP) -fp hard -nodefaults
CFLAGS  := -Cpp_exceptions off -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -sdata 8 -sdata2 8 -nodefaults -msgstyle gcc $(INCLUDES)

# for postprocess.py
PROCFLAGS := -fsymbol-fixup

# elf2dol needs to know these in order to calculate sbss correctly.
SDATA_PDHR := 9
SBSS_PDHR := 10

$(BUILD_DIR)/src/Dolphin/dvdFatal.o: MWCC_VERSION := 1.0

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

### Default target ###

default: all

all: $(DOL)

ALL_DIRS := build $(BUILD_DIR) $(addprefix $(BUILD_DIR)/,$(SRC_DIRS) $(ASM_DIRS))

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

$(LDSCRIPT): ldscript.lcf
	$(CPP) -MMD -MP -MT $@ -MF $@.d -I include/ -I . -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(DOL): $(ELF) | tools
	$(ELF2DOL) $< $@ $(SDATA_PDHR) $(SBSS_PDHR) $(TARGET_COL)
	$(SHA1SUM) -c sha1/$(NAME).$(VERSION).sha1
	$(PYTHON) calcprogress.py $@

clean:
	rm -f -d -r build

tools:
	$(MAKE) -C tools

$(ELF): $(O_FILES) $(LDSCRIPT)
	./$(PATCHLINKER) $(LD) 117
	@echo $(O_FILES) > build/o_files
	$(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) @build/o_files
# The Metrowerks linker doesn't generate physical addresses in the ELF program headers. This fixes it somehow.
	$(OBJCOPY) $@ $@

$(BUILD_DIR)/%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<
	
$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
	#$(PYTHON) $(POSTPROC) $(PROCFLAGS) $@

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
	#$(PYTHON) $(POSTPROC) $(PROCFLAGS) $@

### Debug Print ###

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
