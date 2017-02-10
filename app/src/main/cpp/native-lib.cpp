#include <jni.h>
#include <string>
#include "singleton.h"

singleton * singleton::instance = NULL;

extern "C" jstring Java_com_example_matas_singletoninc_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    singleton::getInstance()->setText("Hello from C++ Singleton");
    std::string hello = singleton::getInstance()->getText();

    return env->NewStringUTF(hello.c_str());
}
