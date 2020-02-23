#ifndef __Z64OVL_MM_U_10_H__
#define __Z64OVL_MM_U_10_H__

#define MM_U_1_0 1
#define NZSE 1
#define RETAIL_NUANCES 1

#include "../h/mips.h"
#include "types.h"
#include "../z64_functions.h"

// RAM Stuff
#define Z64GL_SAVE_CONTEXT  0x801EF670
#define Z64GL_IS_NIGHT      0x801EF680 // u32, 0 if day, 1 if night
#define RAM_SEGMENT_TABLE   0x801F8180 // 0x80100504 is like rel2abs
#define GLOBAL_CONTEXT      0x803E6B20
#define AS_A0               (GLOBAL_CONTEXT + 0x001CA0) // spawn_actor argument 0
#define OS_A0               (GLOBAL_CONTEXT + 0x017D88) // spawn_object argument 0

#endif
