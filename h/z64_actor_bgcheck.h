#ifndef Z64_BGCHECK_H_INCLUDED
#define Z64_BGCHECK_H_INCLUDED

#define BGCHK_NEAR_FLOOR  0b0000000000000001 /* near floor */
#define BGCHK_UNK00       0b0000000000000010 /* ? */
#define BGCHK_NEAR_LEDGE  0b0000000000000100 /* near ledge */
#define BGCHK_NEAR_WALL   0b0000000000001000 /* near wall(?) */
#define BGCHK_UNK01       0b0000000000010000 /* ? */
#define BGCHK_IN_WATER0   0b0000000000100000 /* set in water */
#define BGCHK_IN_WATER1   0b0000000001000000 /* set in water */
#define BGCHK_ON_GROUND   0b0000000010000000 /* on the ground */
#define BGCHK_UNK02       0b0000000100000000 /* ? */
#define BGCHK_UNK03       0b0000001000000000 /* ? */
#define BGCHK_FACE_WALL   0b0000010000000000 /* facing wall */
#define BGCHK_UNK04       0b0000100000000000 /* ? */
#define BGCHK_UNK05       0b0001000000000000 /* ? */
#define BGCHK_UNK06       0b0010000000000000 /* ? */
#define BGCHK_UNK07       0b0100000000000000 /* ? */
#define BGCHK_UNK08       0b1000000000000000 /* ? */

#define BGCHK_0x0B        (BGCHK_NEAR_WALL | BGCHK_UNK00 | BGCHK_NEAR_FLOOR)

#endif