LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)


#opencv
OPENCVROOT:= C:\Users\suyux\Downloads\OpenCV-3.1.0-android-sdk
OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
OPENCV_LIB_TYPE:=SHARED
include ${OPENCVROOT}/sdk/native/jni/OpenCV.mk

LOCAL_SRC_FILES := com_example_suyux_opencv_face_detection_4_OpencvClass.cpp

LOCAL_LDLIBS += -llog
LOCAL_MODULE := MyFaceLibs


include $(BUILD_SHARED_LIBRARY)