#include "com_tenpercent_strobe_NativeWrapper.h"
#include "Logic.h"

static Logic nativeLogic;

void JNICALL Java_com_tenpercent_strobe_NativeWrapper_init(JNIEnv *env, jclass jclass1, jint jint1,
                                                jint jint2)
{
  nativeLogic.initContext(jint1, jint2);
}

void JNICALL Java_com_tenpercent_strobe_NativeWrapper_step(JNIEnv *env, jclass jclass1)
{
  nativeLogic.drawFrame();
}