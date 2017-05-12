#include "my_intellij_androidrtp_MainActivity.h"
//
// Created by Mohammad Nurdin bin Norazan on 10/05/2017.
//

JNIEXPORT jstring JNICALL Java_my_intellij_androidrtp_MainActivity_getMsgFromJni(JNIEnv* env, jobject){

    return env->NewStringUTF("Hello From Jni");
}