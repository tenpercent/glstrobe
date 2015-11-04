#ifndef JNI_DEFINES_H
#define JNI_DEFINES_H

#include <jni.h>

#define  LOG_TAG    "libgl2jni"

#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif