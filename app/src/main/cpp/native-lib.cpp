//
// Created by FRAMGIA\nguyen.thanh.tungh on 12/28/18.
//

//#include <jni.h>
//#include <string>
//
//std::string mPackageName = "jp.co.ARNewYearView";
//std::string mVuforiaKey = "myprintKeyNYView";
//std::string mFuckHacked = "FUCK HACKED";
//const static int PERCENT_HACKED = 1;
//
//jstring getPackageName(
//        JNIEnv *env,
//        jobject activity) {
//
//    jclass context = env->GetObjectClass(activity);
//    jmethodID midGetPackageName = (env)->GetMethodID(context,
//                                                     "getPackageName",
//                                                     "()Ljava/lang/String;");
//
//    jstring packageName = (jstring) (env)->CallObjectMethod(activity, midGetPackageName);
//    return packageName;
//}
//
//// get interstitial ads for Native Activity
//extern "C"
//JNIEXPORT jstring JNICALL
//Java_com_jp_refactor_ui_video_VideoPlaybackActivity_vuforiaKey(
//        JNIEnv *env,
//        jobject activity) {
//
//    const char *mCurrentPackageName = (env)->GetStringUTFChars(getPackageName(env, activity), 0);
//
//    if (mPackageName.compare(mCurrentPackageName) == 0) {
//        return env->NewStringUTF(mVuforiaKey.c_str());
//    } else {
//        return env->NewStringUTF(mFuckHacked.c_str());
//    }
//}
//
//// get interstitial ads for Native Activity
//extern "C"
//JNIEXPORT jstring JNICALL
//Java_com_jp_refactor_ui_video_VideoPlaybackOfflineActivity_vuforiaKey(
//        JNIEnv *env,
//        jobject activity) {
//
//    const char *mCurrentPackageName = (env)->GetStringUTFChars(getPackageName(env, activity), 0);
//
//    if (mPackageName.compare(mCurrentPackageName) == 0) {
//        return env->NewStringUTF(mVuforiaKey.c_str());
//    } else {
//        return env->NewStringUTF(mFuckHacked.c_str());
//    }
//}