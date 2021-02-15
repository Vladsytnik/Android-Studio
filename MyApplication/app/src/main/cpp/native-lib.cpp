#include <jni.h>
#include <string>
#include <android/log.h>

#define LOG_INFO(...) __android_log_print(ANDROID_LOG_INFO, "MyApplication_ndk", __VA_ARGS__)

#include <spdlog/spdlog.h>
#include "spdlog/sinks/android_sink.h"





extern "C" JNIEXPORT jstring JNICALL
Java_ru_iu3_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOG_INFO("Hello from system log %d", 2021);
    return env->NewStringUTF(hello.c_str());
}