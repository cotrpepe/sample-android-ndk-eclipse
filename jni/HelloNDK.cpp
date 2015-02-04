#include <jni.h>
#include <com_example_hellondk_MainActivity.h>

JNIEXPORT jstring JNICALL Java_com_example_hellondk_MainActivity_getMsgFromNDK(JNIEnv *env, jobject thisz) {
	jstring jstr = env->NewStringUTF("Hello from NDK!");
	return jstr;
}
