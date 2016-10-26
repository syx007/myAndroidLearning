#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_suyux_opencv_1face_1detection_1c_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
