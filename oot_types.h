#ifndef __Z64OVL_OOT_TYPES_H__
#define __Z64OVL_OOT_TYPES_H__

#include <stdint.h>
#include "mips.h"

/* From the Nintendo 64 SDK*/
typedef void *	OSMesg;

typedef s32	OSPri;
typedef s32	OSId;
typedef union	{ struct { f32 f_odd; f32 f_even; } f; f64 d; }	__OSfp;

typedef struct {
	u64	at, v0, v1, a0, a1, a2, a3;
	u64	t0, t1, t2, t3, t4, t5, t6, t7;
	u64	s0, s1, s2, s3, s4, s5, s6, s7;
	u64	t8, t9,         gp, sp, s8, ra;
	u64	lo, hi;
	u32	sr, pc, cause, badvaddr, rcp;
	u32	fpcsr;
	__OSfp	 fp0,  fp2,  fp4,  fp6,  fp8, fp10, fp12, fp14;
	__OSfp	fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;

typedef struct {
    u32 flag;
    u32 count;
    u64 time;
} __OSThreadprofile_s;

typedef struct OSThread_s {
	struct OSThread_s	*next;		/* run/mesg queue link */
	OSPri			priority;	/* run/mesg queue priority */
	struct OSThread_s	**queue;	/* queue thread is on */
	struct OSThread_s	*tlnext;	/* all threads queue link */
	u16			state;		/* OS_STATE_* */
	u16			flags;		/* flags for rmon */
	OSId			id;		/* id for debugging */
	int			fp;		/* thread has used fp unit */
	__OSThreadprofile_s     *thprof;        /* workarea for thread profiler */
	__OSThreadContext	context;	/* register/interrupt mask */
} OSThread;

typedef struct OSMesgQueue_s {
	OSThread	*mtqueue;	/* Queue to store threads blocked
					   on empty mailboxes (receive) */
	OSThread	*fullqueue;	/* Queue to store threads blocked
					   on full mailboxes (send) */
	s32		validCount;	/* Contains number of valid message */
	s32		first;		/* Points to first valid message */
	s32		msgCount;	/* Contains total # of messages */
	OSMesg		*msg;		/* Points to message buffer array */
} OSMesgQueue;

// Controller Input
typedef enum {
	INPUT_NONE = 0b0000000000000000,
	INPUT_C_RIGHT = 0b0000000000000001,
	INPUT_C_LEFT = 0b0000000000000010,
	INPUT_C_DOWN = 0b0000000000000100,
	INPUT_C_UP = 0b0000000000001000,
	INPUT_R_TRIGGER = 0b0000000000010000,
	INPUT_L_TRIGGER = 0b0000000000100000,
	INPUT_D_RIGHT = 0b0000000100000000,
	INPUT_D_LEFT = 0b0000001000000000,
	INPUT_D_DOWN = 0b0000010000000000,
	INPUT_D_UP = 0b0000100000000000,
	INPUT_START = 0b0001000000000000,
	INPUT_Z = 0b0010000000000000,
	INPUT_B = 0b0100000000000000,
	INPUT_A = 0b1000000000000000
} z64_button_t;

typedef struct {
	z64_button_t	button;
	char	stick_x;
	char	stick_y;
	char	errno;
} OSContPad;

typedef struct {
	OSContPad current;
	OSContPad last;
	OSContPad pressEdge;
	OSContPad releaseEdge;
} z64_controller_t;

// Global Context
typedef struct{
	int *gfx_ctxt;
	int *update;
	int *destuctor;
	int *init_next;
	int size;
	z64_controller_t controller[4];
	uint32_t heap_size;
	int *heap;
	int *heap_free_start;
	int *heap_free_end;
	int *unk1;
	int *unk2;
	int *unk3;
	int *unk4;
	int *unk5;
	int execute;
	int update_count;
	int unk6;
} z64_game_state_t;

// Graphics Context
typedef struct{
	int size;
	int *disp;
	int *append;
	int *append_end;
} z64_disp_t;

typedef struct{
	int *w_poly_opa_start;
	int *w_poly_xlu_start;
	int *w_overlay_start;
	OSMesg unk1[8];
	OSMesgQueue unk2;
	int unk3; //Set to 1
	int unk4; //Set to 4
	int *ucode_pointer;
	int ucode_length;
	int *ucode_pointer_2; //?
	int ucode_length_2; //?
	int *dmem_data;
	int unk5; //Set to 0x0800
	int *unk6; //Set to 0x8016A240
	int unk7; // Set to 0x0400
	int unk8; // Set to 0x80151640
	int unk9; //Set to 0x80169640
	int *c_work_disp_start;
	int c_work_disp_size;
	int *unk_buffer_start;
	int unk_buffer_size;
	int *w_work_disp_start;
	z64_disp_t work;
	z64_disp_t overlay;
	z64_disp_t poly_opa;
	z64_disp_t poly_xlu;
	int frame_counter_1;
	int *w_framebuffer;
	int frame_counter_2;
	int *function; //?
	int *global_context;
} z64_graphics_context_t;

enum DISP{
	WORK = 0x01BC,
	OVERLAY = 0x02B0,
	POLY_OPA = 0x02C0,
	POLY_XLU = 0x02D0
};

// Actor Collision
typedef struct z64_capsule_s{
	// Empty Filling
} z64_capsule_t;

typedef struct vec3f_s {
    f32 x, y, z;
} vec3f_t, z64_point_t;

#endif
