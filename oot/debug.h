#ifndef __Z64OVL_OOT_DEBUG_H__
#define __Z64OVL_OOT_DEBUG_H__

#define OOT_DEBUG 1
#define NZLE 1

#include "../h/mips.h"
#include "types.h"


// RAM Stuff
#define Z64GL_SAVE_CONTEXT          0x8015E660
#define STATIC_CONTEXT              0x8015FA90
#define RAM_SEGMENT_TABLE           0x80166FA8
#define GLOBAL_CONTEXT              0x80212020
#define AS_A0                       (GLOBAL_CONTEXT + 0x001C24) // spawn_actor argument 0
#define OS_A0                       (GLOBAL_CONTEXT + 0x0117A4) // spawn_object argument 0
#define NAVI                        0x8022CBE0

#include "shared.h"
#include "../z64_functions.h"

#endif
