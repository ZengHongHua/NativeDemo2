//
// Created by 13746 on 2022/8/8.
//

#include <jni.h>

JNIEXPORT jint JNICALL Java_com_example_nativedemo_NumNative_getSumFromC(
        JNIEnv* env,
        jobject obj,
        jint age,
        jint high
) {
    return age+high;
}