/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_Sage */

#ifndef _Included_sage_Sage
#define _Included_sage_Sage
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_Sage_REQUIRE_WIN32_LAUNCHER
#define sage_Sage_REQUIRE_WIN32_LAUNCHER 1L
/* Inaccessible static: baseSystemTime */
/* Inaccessible static: baseCPUTime */
/* Inaccessible static: cpuFreq */
#undef sage_Sage_MILLIS_PER_MIN
#define sage_Sage_MILLIS_PER_MIN 60000i64
#undef sage_Sage_MILLIS_PER_HR
#define sage_Sage_MILLIS_PER_HR 3600000i64
#undef sage_Sage_MILLIS_PER_DAY
#define sage_Sage_MILLIS_PER_DAY 86400000i64
#undef sage_Sage_MILLIS_PER_WEEK
#define sage_Sage_MILLIS_PER_WEEK 604800000i64
#undef sage_Sage_DOS_BYTE_LIMIT
#define sage_Sage_DOS_BYTE_LIMIT 100000L
#undef sage_Sage_STANDARD_TIMEOUT
#define sage_Sage_STANDARD_TIMEOUT 120000L
#undef sage_Sage_USE_HIRES_TIME
#define sage_Sage_USE_HIRES_TIME 1L
#undef sage_Sage_HKEY_CLASSES_ROOT
#define sage_Sage_HKEY_CLASSES_ROOT 1L
#undef sage_Sage_HKEY_CURRENT_CONFIG
#define sage_Sage_HKEY_CURRENT_CONFIG 2L
#undef sage_Sage_HKEY_CURRENT_USER
#define sage_Sage_HKEY_CURRENT_USER 3L
#undef sage_Sage_HKEY_LOCAL_MACHINE
#define sage_Sage_HKEY_LOCAL_MACHINE 4L
#undef sage_Sage_HKEY_USERS
#define sage_Sage_HKEY_USERS 5L
/* Inaccessible static: DF_CLEAN */
/* Inaccessible static: DF */
/* Inaccessible static: DF_LITTLE */
/* Inaccessible static: DF_FULL */
#undef sage_Sage_NUM_OUTPUT_FILES
#define sage_Sage_NUM_OUTPUT_FILES 3L
#undef sage_Sage_DID_CONNECT
#define sage_Sage_DID_CONNECT 1L
#undef sage_Sage_CONNECT_ERR
#define sage_Sage_CONNECT_ERR 2L
/* Inaccessible static: createdDialup */
/* Inaccessible static: stdOutHandle */
/* Inaccessible static: systemStartup */
/* Inaccessible static: client */
/* Inaccessible static: preferredServer */
/* Inaccessible static: sysCmdArgs */
/* Inaccessible static: splashWindow */
/* Inaccessible static: splashText */
/* Inaccessible static: CLIENT_XFER_PROPERTY_PREFIXES */
/* Inaccessible static: CLIENT_DONT_SAVE_PROPERTY_PREFIXES */
/* Inaccessible static: prefFile */
/* Inaccessible static: prefs */
#undef sage_Sage_DUMMY_MSG
#define sage_Sage_DUMMY_MSG 0L
#undef sage_Sage_START_ENC_MSG
#define sage_Sage_START_ENC_MSG 1L
#undef sage_Sage_START_PRV_MSG
#define sage_Sage_START_PRV_MSG 2L
#undef sage_Sage_SWITCH_ENC_MSG
#define sage_Sage_SWITCH_ENC_MSG 3L
#undef sage_Sage_STOP_ENC_MSG
#define sage_Sage_STOP_ENC_MSG 4L
#undef sage_Sage_TUNE_MSG
#define sage_Sage_TUNE_MSG 5L
#undef sage_Sage_AUTOTUNE_MSG
#define sage_Sage_AUTOTUNE_MSG 6L
#undef sage_Sage_SWITCH_CONN_MSG
#define sage_Sage_SWITCH_CONN_MSG 7L
#undef sage_Sage_PLAY_FILE_MSG
#define sage_Sage_PLAY_FILE_MSG 8L
/* Inaccessible static: mainHwnd */
/* Inaccessible static: appName */
/* Inaccessible static: msgQueue */
/* Inaccessible static: poppy */
/* Inaccessible static: hexDigit */
/*
 * Class:     sage_Sage
 * Method:    readStringValue
 * Signature: (ILjava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_Sage_readStringValue
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     sage_Sage
 * Method:    readDwordValue
 * Signature: (ILjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_sage_Sage_readDwordValue
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     sage_Sage
 * Method:    writeStringValue
 * Signature: (ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_Sage_writeStringValue
  (JNIEnv *, jclass, jint, jstring, jstring, jstring);

/*
 * Class:     sage_Sage
 * Method:    writeDwordValue
 * Signature: (ILjava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_Sage_writeDwordValue
  (JNIEnv *, jclass, jint, jstring, jstring, jint);

/*
 * Class:     sage_Sage
 * Method:    removeRegistryValue
 * Signature: (ILjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_Sage_removeRegistryValue
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     sage_Sage
 * Method:    getRegistryNames
 * Signature: (ILjava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_sage_Sage_getRegistryNames
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     sage_Sage
 * Method:    addTaskbarIcon0
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_addTaskbarIcon0
  (JNIEnv *, jclass, jint);

/*
 * Class:     sage_Sage
 * Method:    updateTaskbarIcon0
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_updateTaskbarIcon0
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     sage_Sage
 * Method:    removeTaskbarIcon0
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_removeTaskbarIcon0
  (JNIEnv *, jclass, jint);

/*
 * Class:     sage_Sage
 * Method:    getCpuResolution
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sage_Sage_getCpuResolution
  (JNIEnv *, jclass);

/*
 * Class:     sage_Sage
 * Method:    getCpuTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sage_Sage_getCpuTime
  (JNIEnv *, jclass);

/*
 * Class:     sage_Sage
 * Method:    getEventTime0
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sage_Sage_getEventTime0
  (JNIEnv *, jclass);

/*
 * Class:     sage_Sage
 * Method:    enableSSAndPM
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_enableSSAndPM
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     sage_Sage
 * Method:    postMessage0
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_postMessage0
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     sage_Sage
 * Method:    println0
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_println0
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     sage_Sage
 * Method:    getDiskFreeSpace0
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_sage_Sage_getDiskFreeSpace0
  (JNIEnv *, jclass, jstring);

/*
 * Class:     sage_Sage
 * Method:    getDiskTotalSpace0
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_sage_Sage_getDiskTotalSpace0
  (JNIEnv *, jclass, jstring);

/*
 * Class:     sage_Sage
 * Method:    getFileSystemType
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_Sage_getFileSystemType
  (JNIEnv *, jclass, jstring);

/*
 * Class:     sage_Sage
 * Method:    getFileSystemIdentifier
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_sage_Sage_getFileSystemIdentifier
  (JNIEnv *, jclass, jstring);

/*
 * Class:     sage_Sage
 * Method:    connectToInternet0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sage_Sage_connectToInternet0
  (JNIEnv *, jclass);

/*
 * Class:     sage_Sage
 * Method:    disconnectInternet0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sage_Sage_disconnectInternet0
  (JNIEnv *, jclass);

/*
 * Class:     sage_Sage
 * Method:    setSystemTime0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_Sage_setSystemTime0
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sage_Sage
 * Method:    getScreenArea0
 * Signature: ()Ljava/awt/Rectangle;
 */
JNIEXPORT jobject JNICALL Java_sage_Sage_getScreenArea0
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
