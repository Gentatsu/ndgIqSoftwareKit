
include $(KCONFIG_FILE)

KBUILD_ZEPHYR_APP := $(OUTPUT_DIR)/kapp/libkbuildout.a
export KBUILD_ZEPHYR_APP

# This rule just to put the library where the Zephyr build expects to find it
# 	built-in.a -> kapp/libkbuildout.a
$(OUTPUT_DIR)/kapp/libkbuildout.a: $(OUT)/kbuild/built-in.a
	@echo "Preparing framework archive for Zephyr build"
	$(AT)install -d $(OUTPUT_DIR)/kapp
	$(AT)rm -f $@
	$(AT)$(AR) -rcT $@ $<

# We need to add the following C flags that are appended by the Viper OS build


# This included file defines base targets like doc or $(OUT)/built-in.a
include $(T)/build/base.mk
