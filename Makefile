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

# Overkill epilogue fixup strategy. Set to 1 if necessary.
EPILOGUE_PROCESS := 1

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
ifeq ($(EPILOGUE_PROCESS),1)
EPILOGUE_DIR := epilogue/$(NAME).$(VERSION)
endif

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
ifeq ($(EPILOGUE_PROCESS),1)
include e_files.mk
endif

O_FILES :=	$(GROUP_0_FILES) $(JSYSTEM) $(DOLPHIN)\
			$(YAMASHITA) $(KANDO) $(NISHIMURA) $(OGAWA) $(HIKINO) $(MORIMURA) $(EBISAWA) $(KONO)\
			$(BOOTUP) $(COMMON) $(GC) $(UTILITY)
ifeq ($(EPILOGUE_PROCESS),1)
E_FILES :=	$(EPILOGUE_UNSCHEDULED)
endif
DEPENDS := $(O_FILES:.o=.d)
DEPENDS += $(E_FILES:.o=.d)
# If a specific .o file is passed as a target, also process its deps
DEPENDS += $(MAKECMDGOALS:.o=.d)

#-------------------------------------------------------------------------------
# Tools
#-------------------------------------------------------------------------------

MWCC_VERSION := 2.6
ifeq ($(EPILOGUE_PROCESS),1)
MWCC_EPI_VERSION := 1.2.5
MWCC_EPI_EXE := mwcceppc.exe
endif
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
  DEPENDS   := $(DEPENDS:.d=.d.unix)
  AS      := $(DEVKITPPC)/bin/powerpc-eabi-as
  CPP     := $(DEVKITPPC)/bin/powerpc-eabi-cpp -P
  PYTHON  := python3
endif
CC      = $(WINE) tools/mwcc_compiler/$(MWCC_VERSION)/mwcceppc.exe
ifeq ($(EPILOGUE_PROCESS),1)
CC_EPI  = $(WINE) tools/mwcc_compiler/$(MWCC_EPI_VERSION)/$(MWCC_EPI_EXE)
endif
LD      := $(WINE) tools/mwcc_compiler/$(MWLD_VERSION)/mwldeppc.exe
ELF2DOL := tools/elf2dol
SHA1SUM := sha1sum

TRANSFORM_DEP := tools/transform-dep.py
FRANK := tools/franklite.py

# Options
INCLUDES := -i include/
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
CFLAGS  := -Cpp_exceptions off -enum int -inline auto -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -common on -sdata 8 -sdata2 8 -nodefaults -MMD -DVERNUM=$(VERNUM) $(INCLUDES)

ifeq ($(VERBOSE),0)
# this set of ASFLAGS generates no warnings.
ASFLAGS += -W
endif

$(BUILD_DIR)/src/Dolphin/dvdFatal.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/dvderror.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/dvdidutils.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/dvdqueue.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/__start.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/__ppc_eabi_init.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSLink.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/PPCArch.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/vec.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/GXBump.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/GBA.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/GBARead.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/GBAWrite.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/GDBase.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/SISamplingRate.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/fstload.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/db.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSAudioSystem.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSAlloc.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OS.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSError.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSCache.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSSync.o: MWCC_VERSION := 1.2.5
$(BUILD_DIR)/src/Dolphin/OSMessage.o: MWCC_VERSION := 1.2.5

# Dirty hack to overwrite sdata
# It seems TRK-related files need -sdata 0
$(BUILD_DIR)/src/Dolphin/main_TRK.o: CFLAGS += -sdata 0
$(BUILD_DIR)/src/Dolphin/mainloop.o: CFLAGS += -sdata 0
$(BUILD_DIR)/src/Dolphin/nubinit.o: CFLAGS += -sdata 0
$(BUILD_DIR)/src/Dolphin/target_options.o: CFLAGS += -sdata 0

# Disable read-only strings
$(BUILD_DIR)/src/Dolphin/SISamplingRate.o: CFLAGS += -str noreadonly
$(BUILD_DIR)/src/Dolphin/fstload.o: CFLAGS += -str noreadonly
$(BUILD_DIR)/src/Dolphin/db.o: CFLAGS += -str noreadonly
$(BUILD_DIR)/src/Dolphin/OS.o: CFLAGS += -str noreadonly
$(BUILD_DIR)/src/Dolphin/OSCache.o: CFLAGS += -str noreadonly
$(BUILD_DIR)/src/Dolphin/OSError.o: CFLAGS += -str noreadonly
$(BUILD_DIR)/src/Dolphin/GBA.o: CFLAGS += -str noreadonly

# This is inline-deferred for some reason
$(BUILD_DIR)/src/Dolphin/mbstring.o: CFLAGS := -Cpp_exceptions off -enum int -inline deferred -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -common on -sdata 8 -sdata2 8 -nodefaults -MMD -DVERNUM=$(VERNUM) $(INCLUDES)

# Disable common BSS pool
$(DOLPHIN): CFLAGS += -common off

# Enable string pooling
$(BUILD_DIR)/src/Dolphin/locale.o: CFLAGS += -str pool

#-------------------------------------------------------------------------------
# Recipes
#-------------------------------------------------------------------------------

### Default target ###

default: all

all: $(DOL)

ALL_DIRS := $(sort $(dir $(O_FILES)))
ifeq ($(EPILOGUE_PROCESS),1)
EPI_DIRS := $(sort $(dir $(E_FILES)))
endif

# Make sure build directory exists before compiling anything
DUMMY != mkdir -p $(ALL_DIRS)

# ifeq ($(EPILOGUE_PROCESS),1)
# Make sure profile directory exists before compiling anything
# DUMMY != mkdir -p $(EPI_DIRS)
# endif

.PHONY: tools

$(LDSCRIPT): ldscript.lcf
	$(QUIET) $(CPP) -MMD -MP -MT $@ -MF $@.d -I include/ -I . -DBUILD_DIR=$(BUILD_DIR) -o $@ $<

$(DOL): $(ELF) | tools
	$(QUIET) $(ELF2DOL) $< $@
	$(QUIET) $(SHA1SUM) -c sha1/$(NAME).$(VERSION).sha1
ifneq ($(findstring -map,$(LDFLAGS)),)
	$(QUIET) $(PYTHON) tools/calcprogress.py $(DOL) $(MAP)
endif
ifeq ($(USE_AOI),1)
	$(WINE) ./aoi.exe
endif

clean:
	rm -f -d -r build
	rm -f -d -r epilogue
	find . -name '*.o' -exec rm {} +
	find . -name 'ctx.c' -exec rm {} +
	find ./include -name "*.s" -type f -delete
	$(MAKE) -C tools clean
tools:
	$(MAKE) -C tools

# ELF creation makefile instructions
ifeq ($(EPILOGUE_PROCESS),1)
	@echo Linking ELF $@
$(ELF): $(O_FILES) $(E_FILES) $(LDSCRIPT)
	$(QUIET) @echo $(O_FILES) > build/o_files
	$(QUIET) $(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) @build/o_files
else
$(ELF): $(O_FILES) $(LDSCRIPT)
	@echo Linking ELF $@
	$(QUIET) @echo $(O_FILES) > build/o_files
	$(QUIET) $(LD) $(LDFLAGS) -o $@ -lcf $(LDSCRIPT) @build/o_files
endif

%.d.unix: %.d $(TRANSFORM_DEP)
	@echo Processing $<
	$(QUIET) $(PYTHON) $(TRANSFORM_DEP) $< $@

-include $(DEPENDS)

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

ifeq ($(EPILOGUE_PROCESS),1)
$(EPILOGUE_DIR)/%.o: %.c $(BUILD_DIR)/%.o
	@echo Frank is fixing $<
	$(QUIET) $(PYTHON) $(FRANK) $(word 2,$^) $(word 2,$^)

$(EPILOGUE_DIR)/%.o: %.cp $(BUILD_DIR)/%.o
	@echo Frank is fixing $<
	$(QUIET) $(PYTHON) $(FRANK) $(word 2,$^) $(word 2,$^)

$(EPILOGUE_DIR)/%.o: %.cpp $(BUILD_DIR)/%.o
	@echo Frank is fixing $<
	$(QUIET) $(PYTHON) $(FRANK) $(word 2,$^) $(word 2,$^)
endif
# If we need Frank, add the following after the @echo
# $(QUIET) $(CC_EPI) $(CFLAGS) -c -o $@ $<

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
