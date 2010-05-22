LOCAL_PATH:= $(call my-dir)

include $(LOCAL_PATH)/arch-$(TARGET_ARCH)/syscalls.mk

# ========================================================
# libc-ext.a
# ========================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(syscalls_src)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
LOCAL_PRELINK_MODULE := false
LOCAL_MODULE := libc-ext
#LOCAL_SYSTEM_SHARED_LIBRARIES :=

include $(BUILD_STATIC_LIBRARY)


# ========================================================
# libc-ext.so
# ========================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(syscalls_src)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
LOCAL_PRELINK_MODULE := false
LOCAL_MODULE:= libc-ext
LOCAL_SHARED_LIBRARIES := libdl
#LOCAL_SYSTEM_SHARED_LIBRARIES :=

include $(BUILD_SHARED_LIBRARY)

# ========================================================
include $(call all-makefiles-under,$(LOCAL_PATH))
