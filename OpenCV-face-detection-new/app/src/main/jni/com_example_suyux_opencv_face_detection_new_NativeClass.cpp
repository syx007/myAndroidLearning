#include <com_example_suyux_opencv_face_detection_new_NativeClass.h>


JNIEXPORT jstring JNICALL Java_com_example_suyux_opencv_1face_1detection_1new_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass obj){
    return env ->NewStringUTF("This is message from JNI");
}

