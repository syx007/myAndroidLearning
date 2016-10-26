#include <com_example_suyux_anotherjni_test_NativeClass.h>

JNIEXPORT jstring JNICALL Java_com_example_suyux_anotherjni_1test_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass obj){
    return env->NewStringUTF("This is a message from JNI");
  }

