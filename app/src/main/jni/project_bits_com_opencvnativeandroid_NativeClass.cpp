#include <project_bits_com_opencvnativeandroid_NativeClass.h>

JNIEXPORT jstring JNICALL Java_project_bits_com_opencvnativeandroid_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass){
  return env->NewStringUTF("This is message from JNI");
  }


JNIEXPORT jlong JNICALL Java_project_bits_com_opencvnativeandroid_NativeClass_getTimeFromJNI
  (JNIEnv *env, jclass){
  jlong x = (jlong)100;
  return x;
  }