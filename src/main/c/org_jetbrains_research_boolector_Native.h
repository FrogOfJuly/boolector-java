/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jetbrains_research_boolector_Native */

#ifndef _Included_org_jetbrains_research_boolector_Native
#define _Included_org_jetbrains_research_boolector_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    btor
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_btor
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    btorRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_btorRelease
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    var
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_var
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    releaseNode
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_releaseNode
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    bitvecSort
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_bitvecSort
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    releaseSort
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_releaseSort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isBitvecSort
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isBitvecSort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isArraySort
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isArraySort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isFuncSort
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isFuncSort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getWidth
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getWidth
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    not
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_not
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    add
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_add
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    and
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_and
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    or
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_or
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    xor
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_xor
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    neg
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_neg
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    eq
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_eq
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sub
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sub
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    mul
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_mul
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sdiv
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sdiv
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    udiv
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_udiv
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    smod
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_smod
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    urem
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_urem
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sgt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sgt
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    ugt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_ugt
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sgte
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sgte
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    slt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_slt
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    slte
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_slte
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sll
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sll
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    srl
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_srl
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sra
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sra
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    implies
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_implies
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    iff
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_iff
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    concat
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_concat
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    cond
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_cond
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    zero
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_zero
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constBitvec
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constBitvec
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isBoolSort
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isBoolSort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constNodeTrue
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constNodeTrue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constNodeFalse
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constNodeFalse
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getSort
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_getSort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getId
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getId
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getSymbol
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_getSymbol
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    simplify
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_simplify
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constInt
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constInt
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sext
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sext
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    uext
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_uext
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    slice
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_slice
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    arraySort
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_arraySort
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    array
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_array
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    read
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_read
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    write
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_write
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    param
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_param
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    funcSort
 * Signature: (J[JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_funcSort
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    fun
 * Signature: (J[JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_fun
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    uf
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_uf
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    apply
 * Signature: (J[JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_apply
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getBits
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_getBits
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constLong
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constLong
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    forAll
 * Signature: (J[JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_forAll
  (JNIEnv *, jclass, jlong, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    boolectorAssert
 * Signature: (JLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_boolectorAssert
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    kindNode
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_kindNode
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constArray
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constArray
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getWidthNode
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getWidthNode
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getIndexWidth
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getIndexWidth
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    dumpSmt2
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_dumpSmt2
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    dumpSmt2Node
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_dumpSmt2Node
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    printModel
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_printModel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    assume
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_assume
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    bitvecAssignment
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_bitvecAssignment
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    matchNodeByName
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_matchNodeByName
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    copy
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_copy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    assertForm
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_assertForm
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getSat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getSat
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
