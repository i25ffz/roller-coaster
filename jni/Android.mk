LOCAL_PATH := $(call my-dir)

$(info NDK_ROOT:$(NDK_ROOT))

# check CLANG_ASAN enabled
ifeq ($(CLANG_ASAN),1)
ASAN_SO := $(firstword $(shell find $(NDK_ROOT)/toolchains/llvm/prebuilt -name libclang_rt.asan-arm-android.so))
$(info ASAN_SO:$(ASAN_SO))

include $(CLEAR_VARS)
LOCAL_MODULE := asan_rt_arm
LOCAL_SRC_FILES := $(ASAN_SO)
include $(PREBUILT_SHARED_LIBRARY)
endif

#----------------------------------

include $(CLEAR_VARS)

LOCAL_MODULE := rollercoaster

ifeq ($(CLANG_ASAN),1)
LOCAL_CLANG:=true
LOCAL_SANITIZE:=address
LOCAL_MODULE_RELATIVE_PATH := asan

LOCAL_CFLAGS += -fno-omit-frame-pointer -gline-tables-only
LOCAL_CFLAGS += -fsanitize=address -marm
endif

LOCAL_SRC_FILES := \
	pillar.c \
	point.c \
	roller.c \
	rollercoaster.cpp \
	application.cpp

LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv1_CM -lOpenSLES
LOCAL_STATIC_LIBRARIES := android_native_app_glue
ifeq ($(CLANG_ASAN),1)
LOCAL_SHARED_LIBRARIES := asan_rt_arm
endif

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)
