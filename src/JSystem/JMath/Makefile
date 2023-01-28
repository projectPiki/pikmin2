JMATH_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JMath/JMath.o\
	$(BUILD_DIR)/src/JSystem/JMath/random.o\
	$(BUILD_DIR)/asm/JSystem/JMath/JMATrigonometric.o\

DEPENDS += $(JMATH_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JMath.a: $(JMATH_FILES)
	@echo linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JMATH_FILES) > build/JMATH_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JMATH_ofiles
