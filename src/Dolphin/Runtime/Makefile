RUNTIME_FILES:=\
	$(BUILD_DIR)/src/Dolphin/Runtime/__va_arg.o\
	$(BUILD_DIR)/src/Dolphin/Runtime/global_destructor_chain.o\
	$(BUILD_DIR)/src/Dolphin/Runtime/CPlusLibPPC.o\
	$(BUILD_DIR)/asm/Dolphin/Runtime/NMWException.o\
	$(BUILD_DIR)/src/Dolphin/Runtime/ptmf.o\
	$(BUILD_DIR)/asm/Dolphin/Runtime/runtime.o\
	$(BUILD_DIR)/asm/Dolphin/Runtime/__init_cpp_exceptions.o\
	$(BUILD_DIR)/asm/Dolphin/Runtime/Gecko_ExceptionPPC.o\
	$(BUILD_DIR)/src/Dolphin/Runtime/GCN_mem_alloc.o\

$(RUNTIME_FILES): CFLAGS += -common off

# Some files need inline deferred
$(BUILD_DIR)/src/Dolphin/Runtime/global_destructor_chain.o: CFLAGS += -inline deferred
$(BUILD_DIR)/src/Dolphin/Runtime/CPlusLibPPC.o: CFLAGS += -inline deferred
$(BUILD_DIR)/src/Dolphin/Runtime/NMWException.o: CFLAGS += -inline deferred
$(BUILD_DIR)/src/Dolphin/Runtime/__init_cpp_exceptions.o: CFLAGS += -inline deferred
$(BUILD_DIR)/src/Dolphin/Runtime/Gecko_ExceptionPPC.o: CFLAGS += -inline deferred

DEPENDS += $(RUNTIME_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/Runtime/Runtime.a: $(RUNTIME_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(RUNTIME_FILES) > build/RUNTIME_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/RUNTIME_ofiles
