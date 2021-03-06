/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_SharedGroup */

#ifndef _Included_io_realm_internal_SharedGroup
#define _Included_io_realm_internal_SharedGroup
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    createNativeWithImplicitTransactions
 * Signature: (JI[B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_createNativeWithImplicitTransactions
  (JNIEnv *, jobject, jlong, jint, jbyteArray);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCreateReplication
 * Signature: (Ljava/lang/String;[B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeCreateReplication
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeAdvanceRead
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeAdvanceRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeAdvanceReadToVersion
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeAdvanceReadToVersion
(JNIEnv *, jobject, jlong, jlong, jlong);


/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativePromoteToWrite
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativePromoteToWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCommitAndContinueAsRead
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeCommitAndContinueAsRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeRollbackAndContinueAsRead
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeRollbackAndContinueAsRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeBeginImplicit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeBeginImplicit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeGetDefaultReplicationDatabaseFileName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_SharedGroup_nativeGetDefaultReplicationDatabaseFileName
  (JNIEnv *, jobject);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeReserve
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeReserve
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeHasChanged
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_SharedGroup_nativeHasChanged
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeBeginRead
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeBeginRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeEndRead
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeEndRead
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeBeginWrite
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeBeginWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCommit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeCommit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeRollback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeRollback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCreate
 * Signature: (Ljava/lang/String;IZZ[B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SharedGroup_nativeCreate
  (JNIEnv *, jobject, jstring, jint, jboolean, jboolean, jbyteArray);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCompact
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_SharedGroup_nativeCompact
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeCloseReplication
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SharedGroup_nativeCloseReplication
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_SharedGroup
 * Method:    nativeGetVersionID
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_io_realm_internal_SharedGroup_nativeGetVersionID
        (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
