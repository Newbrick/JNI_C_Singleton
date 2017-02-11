#include <jni.h>

#include "singleton.h"

extern "C" jstring Java_com_example_matas_singletoninc_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

//    std::string hello = "Hello from C++";
//    return env->NewStringUTF(hello.c_str());

    static int callCount = 0;

    ++callCount;
    if (callCount > 1) {
        if ((callCount % 2)== 0) {
            singleton::getInstance()->setText("Hello from C++ Singleton");
        } else {
            singleton::getInstance()->setText(
                    singleton::getInstance()->getText() + " ODD call");
        }
    }

    std::string hello = singleton::getInstance()->getText();

    // copy c++ string to java string into VM heap
    jstring text = env->NewStringUTF(hello.c_str());

    // the destructor for a static variable is called at program exit
    // may be need to delete it manually
    if (callCount == 2) {
        singleton::deleteInstance();
    }

    // text variable is allocated in VM heap
    return text;

}
