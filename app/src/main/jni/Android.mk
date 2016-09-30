LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := asan_rt_arm
LOCAL_SRC_FILES := libclang_rt.asan-arm-android.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE := rollercoaster

LOCAL_CLANG:=true
LOCAL_SANITIZE:=address
LOCAL_MODULE_RELATIVE_PATH := asan

LOCAL_CFLAGS += -fno-omit-frame-pointer -gline-tables-only
LOCAL_CFLAGS += -fsanitize=address -marm

LOCAL_SRC_FILES := \
	pillar.c \
	point.c \
	roller.c \
	rollercoaster.cpp \
	application.cpp

LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv1_CM -lOpenSLES
LOCAL_STATIC_LIBRARIES := android_native_app_glue
LOCAL_SHARED_LIBRARIES := asan_rt_arm

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)
