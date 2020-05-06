#ifndef __Z64OVL_MM_TYPES_H__
#define __Z64OVL_MM_TYPES_H__

#include "../stdint.h"
#include "../h/mips.h"
#include "../h/n64.h"
#include "../h/various_types.h"

typedef struct {
    union {
        struct {
            uint32_t            : 16;
            uint32_t scene      : 7;
            uint32_t entrance   : 5;
            uint32_t offset     : 4;
        };
        uint32_t    exit;                           /* 0x0000 */
    };
    uint8_t         mask;                           /* 0x0004 */
    uint8_t         intro_flag;                     /* 0x0005 */
    uint8_t         mash_timer;                     /* 0x0006 */
    uint8_t         pad_0x07_;                      /* 0x0007 */
    uint32_t        cutscene_id;                    /* 0x0008 */
    uint16_t        time_of_day;                    /* 0x000C */
    uint16_t        owl_load;                       /* 0x000E */
    uint32_t        daynight;                       /* 0x0010 */
    int32_t         timespeed;                      /* 0x0014 */
    uint32_t        day;                            /* 0x0018 */
    uint32_t        elapsed_days;                   /* 0x001C */
    uint8_t         current_form;                   /* 0x0020 */
    uint8_t         unk_0x21_;                      /* 0x0021 */
    uint8_t         tatl_flag;                      /* 0x0022 */
    uint8_t         owl_save;                       /* 0x0023 */
    char            zelda3[0x06];                   /* 0x0024 */
    uint16_t        sot_count;                      /* 0x002A */
    char            name[0x08];                     /* 0x002C */
    uint16_t        max_health;                     /* 0x0034 */
    uint16_t        current_health;                 /* 0x0036 */
    uint8_t         magic_level;                    /* 0x0038 */
    uint8_t         current_magic;                  /* 0x0039 */
    uint16_t        rupees;                         /* 0x003A */
    uint32_t        tatl_timer;                     /* 0x003C */
    uint8_t         has_magic;                      /* 0x0040 */
    uint8_t         has_double_magic;               /* 0x0041 */
    uint16_t        has_double_defense;             /* 0x0042 */
    char            unk_0x44_[0x02];                /* 0x0044 */
    union {
        struct {
            uint16_t hidden_owl         : 1;
            uint16_t                    : 4;
            uint16_t dungeon_entrance   : 1;
            uint16_t stone_tower        : 1;
            uint16_t ikana_canyon       : 1;
            uint16_t southern_swap      : 1;
            uint16_t woodfall           : 1;
            uint16_t milk_road          : 1;
            uint16_t clock_town         : 1;
            uint16_t mountain_village   : 1;
            uint16_t snowhead           : 1;
            uint16_t zora_cape          : 1;
            uint16_t great_bay          : 1;
        };
        uint16_t    owls_hit;                       /* 0x0046 */
    };
    char            unk_0x48_[0x04];                /* 0x0048 */
    struct {
        uint8_t b;
        uint8_t cleft;
        uint8_t cdown;
        uint8_t cright;
    }               form_button_item[0x04];         /* 0x004C */
    struct {
        uint8_t b;
        uint8_t cleft;
        uint8_t cdown;
        uint8_t cright;
    }               form_button_slot[0x04];         /* 0x005C */
    union {
        struct {
            uint16_t        : 10;
            uint16_t shield : 2;
            uint16_t        : 2;
            uint16_t sword  : 2;
        };
        uint16_t    equipment;                      /* 0x006C */
    };
    char            unk_0x6E_[0x02];                /* 0x006E */
    int8_t          items[0x18];                    /* 0x0070 */
    int8_t          masks[0x18];                    /* 0x0088 */
    uint8_t         ammo[0x18];                     /* 0x00A0 */
    union {
        struct {
            uint32_t                        : 9;    /* & 0xFF800000 >> 0x17 */
            uint32_t nut_upgrade            : 3;    /* & 0x00700000 >> 0x14 */
            uint32_t stick_upgade           : 3;    /* & 0x000E0000 >> 0x11 */
            uint32_t                        : 3;    /* & 0x00018000 >> 0x0F */
            uint32_t wallet_upgrade         : 2;    /* & 0x00007000 >> 0x0C */
            uint32_t                        : 6;    /* & 0x00000FC0 >> 0x06 */
            uint32_t bomb_bag               : 3;    /* & 0x00000038 >> 0x03 */
            uint32_t quiver                 : 3;    /* & 0x00000007 >> 0x00 */
        };
        uint32_t    equipment_upgrades;             /* 0x00B8 */
    };
    union {
        struct {
            uint32_t heart_piece            : 4;
            uint32_t                        : 3;
            uint32_t lullaby_intro          : 1;
            uint32_t                        : 5;
            uint32_t bombers_notebook       : 1;
            uint32_t suns_song              : 1;
            uint32_t song_of_storms         : 1;
            uint32_t song_of_soaring        : 1;
            uint32_t eponas_song            : 1;
            uint32_t song_of_healing        : 1;
            uint32_t song_of_time           : 1;
            uint32_t sarias_song            : 1;
            uint32_t oath_to_order          : 1;
            uint32_t elegy_of_emptiness     : 1;
            uint32_t new_wave_bossa_nova    : 1;
            uint32_t goron_lullaby          : 1;
            uint32_t sonata_of_awakening    : 1;
            uint32_t                        : 2;
            uint32_t twinmolds_remains      : 1;
            uint32_t gyorgs_remains         : 1;
            uint32_t gohts_remains          : 1;
            uint32_t odolwas_remains        : 1;
        };
        uint32_t    quest_status;                   /* 0x00BC */
    };
    union {
        struct {
            uint8_t                         : 5;
            uint8_t map                     : 1;
            uint8_t compass                 : 1;
            uint8_t boss_key                : 1;
        };
        uint8_t dungeon_item;
    }               dungeon_items[0xA];             /* 0x00C0 */
    uint8_t         dungeon_keys[0x9];              /* 0x00CA */
    uint8_t         defense_hearts;                 /* 0x00D3 */
    uint8_t         stray_fairies[0xA];             /* 0x00D4 */
    char            form_name[0x8][0x3];            /* 0x00DE */
    char            unk_0x00F6_[0x2];               /* 0x00F6 */
    struct
    {
        uint32_t    chest;                          /* 0x0000 */
        uint32_t    switch_1;                       /* 0x0004 */
        uint32_t    switch_2;                       /* 0x0008 */
        uint32_t    clear;                          /* 0x000C */
        uint32_t    collect;                        /* 0x0010 */
        uint32_t    unk_0x14;                       /* 0x0014 */
        uint32_t    unk_0x18;                       /* 0x0018 */
    }               scene_flags[0x78];              /* 0x00F8 */
    char            unk_0x0E18_[0x2E88];            /* 0x0E18 */

    int32_t         file_index;                     /* 0x3CA0 */
    char            unk_0x3CA4[0x0C];               /* 0x3CA4 */
    int             void_flag;                      /* 0x3CB0 */
} z64_file_t;

typedef struct {
    z64_controller_t    raw;                /* 0x0000 */
    uint16_t            status;             /* 0x0004 */
    z64_controller_t    raw_prev;           /* 0x0006 */
    uint16_t            status_prev;        /* 0x000A */
    uint16_t            pad_pressed;        /* 0x000C */
    int8_t              x_diff;             /* 0x000E */
    int8_t              y_diff;             /* 0x000F */
    char                unk_0x10_[0x02];    /* 0x0010 */
    uint16_t            pad_released;       /* 0x0012 */
    int8_t              adjusted_x;         /* 0x0014 */
    int8_t              adjusted_y;         /* 0x0015 */
    char                unk_0x16[0x02];     /* 0x0016 */
} z64_input_t;

// Graphics Context
typedef struct
{
  uint32_t          size;                     /* 0x0000 */
  Gfx              *buf;                      /* 0x0004 */
  Gfx              *p;                        /* 0x0008 */
  Gfx              *d;                        /* 0x000C */
                                              /* 0x0010 */
} z64_disp_buf_t;

typedef struct
{
  Gfx             *poly_opa_d_start;      /* 0x0000 */
  Gfx             *poly_xlu_d_start;      /* 0x0004 */
  char            unk_0x08_[0x08];        /* 0x0008 */
  Gfx             *overlay_d_start;       /* 0x0010 */
  char            unk_0x18_[0x24];        /* 0x0014 */
  OSMesg          task_mesg[8];           /* 0x0038 */
  char            unk_0x58_[0x04];        /* 0x0058 */
  OSMesgQueue     task_queue;             /* 0x005C */
  char            pad_0x74_[0x04];        /* 0x0074 */
  OSScTask        task;                   /* 0x0078 */
  char            unk_0xD0_[0xD0];        /* 0x00D0 */
  Gfx             *work_d_start;          /* 0x01A0 */
  z64_disp_buf_t   work;                   /* 0x01A4 */
  char            unk_0x1C4_[0xE4];       /* 0x01B4 */
  z64_disp_buf_t   overlay;                /* 0x0298 */
  z64_disp_buf_t   poly_opa;               /* 0x02A8 */
  z64_disp_buf_t   poly_xlu;               /* 0x02B8 */
  uint32_t        frame_cnt_1;            /* 0x02C8 */
  void            *frame_buffer;          /* 0x02CC */
  char            unk_0x2E0_[0x08];       /* 0x02D0 */
  uint32_t        frame_cnt_2;            /* 0x02D8 */
} z64_gfx_t;                                 /* 0x02DC */

// Global Context
typedef struct
{
  z64_gfx_t       *gfx_ctxt;                   /* 0x0000 */
  void            *gamestate_update;      /* 0x0004 */
  void            *gamestate_dtor;        /* 0x0008 */
  void            *gamestate_ctor;        /* 0x000C */
  uint32_t         ctxt_size;             /* 0x0010 */
  z64_input_t      input[4];               /* 0x0014 */
  uint32_t        gamestate_heap_size;    /* 0x0074 */
  void            *gamestate_heap_ptr;    /* 0x0078 */
  void            *heap_append_start;     /* 0x007C */
  void            *heap_append_end;       /* 0x0080 */
  void            *gamestate_heap_node;   /* 0x0084 */
  char            unk_0x88_[0x10];        /* 0x0088 */
  int32_t         execute_state;          /* 0x0098 */
  int32_t         gamestate_frames;       /* 0x009C */
  int32_t         unk_0xA0;               /* 0x00A0 */
} z64_game_state_t;

typedef struct
{
  uint32_t          vrom_start;               /* 0x0000 */
  uint32_t          vrom_end;                 /* 0x0004 */
                                              /* 0x0008 */
} z64_vrom_file_t;

typedef struct
{
  /* index of z64_col_type in col_hdr */
  uint16_t          type;                     /* 0x0000 */
  /* vertex indices, a and b are bitmasked for some reason */
  struct
  {
    uint16_t        unk_00_             : 3;
    uint16_t        va                  : 13;
  };                                          /* 0x0002 */
  struct
  {
    uint16_t        unk_01_             : 3;
    uint16_t        vb                  : 13;
  };                                          /* 0x0004 */
  uint16_t          vc;                       /* 0x0006 */
  /* normal vector */
  z64_xyz_t         norm;                     /* 0x0008 */
  /* plane distance from origin */
  int16_t           dist;                     /* 0x000E */
                                              /* 0x0010 */
} z64_col_poly_t;

typedef struct
{
    struct attack {
        uint8_t damage : 4;
        uint8_t effect : 4;
    } attack[0x20];
} z64_damagechart_t;

#include "actor.h"

typedef struct
{
  struct
  {
    uint32_t        unk_00_             : 1;
    /* link drops one unit into the floor */
    uint32_t        drop                : 1;
    uint32_t        special             : 4;
    uint32_t        interaction         : 5;
    uint32_t        unk_01_             : 3;
    uint32_t        behavior            : 5;
    uint32_t        exit                : 5;
    uint32_t        camera              : 8;
  } flags_1;                                  /* 0x0000 */
  struct
  {
    uint32_t        pad_00_             : 4;
    uint32_t        wall_damage         : 1;
    uint32_t        unk_00_             : 6;
    uint32_t        unk_01_             : 3;
    uint32_t        hookshot            : 1;
    uint32_t        echo                : 6;
    uint32_t        unk_02_             : 5;
    uint32_t        terrain             : 2;
    uint32_t        material            : 4;
  } flags_2;                                  /* 0x0004 */
                                              /* 0x0008 */
} z64_col_type_t;

typedef struct
{
  z64_xyz_t         pos;                      /* 0x0000 */
  z64_xyz_t         rot;                      /* 0x0006 */
  int16_t           fov;                      /* 0x000C */
  int16_t           unk_00_;                  /* 0x000E */
                                              /* 0x0010 */
} z64_camera_params_t;

typedef struct
{
  uint16_t          mode;                     /* 0x0000 */
  uint16_t          unk_01_;                  /* 0x0002 */
  /* segment address of z64_camera_params_t */
  uint32_t          seg_params;               /* 0x0004 */
                                              /* 0x0008 */
} z64_camera_t;

typedef struct
{
    z64_xyz_t      pos;
    int16_t       width;
    int16_t       depth;
    struct
    {
        uint32_t    unk_00_ : 12;
        uint32_t    active : 1;
        uint32_t    group : 6; /* ? */
        uint32_t    unk_01_ : 5;
        uint32_t    camera : 8;
    } flags;
} z64_col_water_t;

typedef struct
{
    z64_xyz_t          min;
    z64_xyz_t          max;
    uint16_t          n_vtx;
    z64_xyz_t         *vtx;
    uint16_t          n_poly;
    z64_col_poly_t    *poly;
    z64_col_type_t    *type;
    z64_camera_t      *camera;
    uint16_t          n_water;
    z64_col_water_t   *water;
} z64_col_hdr_t;

typedef struct
{
  int16_t           poly_idx;                 /* 0x0000 */
  uint16_t          list_next;                /* 0x0002 */
                                              /* 0x0004 */
} z64_col_list_t;

typedef struct
{
    z64_actor_t       *actor;                    /* 0x0000 */
    z64_col_hdr_t     *col_hdr;                  /* 0x0004 */
    uint16_t          unk_0x08;                 /* 0x0008 */
    uint16_t          unk_0x0A;                 /* 0x000A */
    uint16_t          unk_0x0C;                 /* 0x000C */
    int16_t           unk_0x0E;                 /* 0x000E number of polys? */
    int16_t           unk_0x10;                 /* 0x0010 */
    z64_xyzf_t         scale_1;                  /* 0x0014 */
    z64_rot_t          rot_1;                    /* 0x0020 */
    z64_xyzf_t         pos_1;                    /* 0x0028 */
    z64_xyzf_t         scale_2;                  /* 0x0034 */
    z64_rot_t          rot_2;                    /* 0x0040 */
    z64_xyzf_t         pos_2;                    /* 0x0048 */
    int16_t           unk_0x54;                 /* 0x0054 */
    int16_t           unk_0x56;                 /* 0x0056 */
    int16_t           unk_0x58;                 /* 0x0058 */
    int16_t           unk_0x5A;                 /* 0x005A */
    char              unk_0x5C[0x8];            /* 0x005C */
} z64_col_chk_actor_t;                           /* 0x0064 */


typedef struct
{
  uint16_t          floor_list_idx;           /* 0x0000 */
  uint16_t          wall_list_idx;            /* 0x0002 */
  uint16_t          ceil_list_idx;            /* 0x0004 */
                                              /* 0x0006 */
} z64_col_lut_t;

typedef struct
{
    /* static collision stuff */
    z64_col_hdr_t       *col_hdr;                /* 0x0000 */
    z64_xyzf_t           bbox_min;               /* 0x0004 */
    z64_xyzf_t           bbox_max;               /* 0x0010 */
    int32_t             n_sect_x;               /* 0x001C */
    int32_t             n_sect_y;               /* 0x0020 */
    int32_t             n_sect_z;               /* 0x0024 */
    z64_xyzf_t           sect_size;              /* 0x0028 */
    z64_xyzf_t           sect_inv;               /* 0x0034 */
    z64_col_lut_t       *stc_lut;                /* 0x0040 */
    uint16_t            stc_list_max;           /* 0x0044 */
    uint16_t            stc_list_pos;           /* 0x0046 */
    z64_col_list_t      *stc_list;               /* 0x0048 */
    uint8_t            *stc_check;              /* 0x004C */

                                                /* bg actor collision struct start */
    int8_t              unk_0x0050;             /* 0x0050 */
    z64_col_chk_actor_t  actors[50];             /* 0x0054 */
    uint16_t            actor_loaded[50];       /* 0x13DC */
                                                /* dynamic collision stuff */
    z64_col_poly_t      *dyn_poly;               /* 0x1440 */
    z64_xyz_t           *dyn_vtx;                /* 0x1444 */
    int32_t             unk_0x1448;             /* 0x1448 */
    void               *unk_0x144C;             /* 0x144C */
                                                /* struct */
    struct
    {
        z64_col_list_t    *list;                 /* 0x1450 */
        int32_t           count;                /* 0x1454 */
        int32_t           max;                  /* 0x1458 */
    } dyn;
                                                /* bg actor collision struct end */
    uint32_t            dyn_list_max;           /* 0x145C */
    uint32_t            dyn_poly_max;           /* 0x1460 */
    uint32_t            dyn_vtx_max;            /* 0x1464 */
    uint32_t            mem_size;               /* 0x1468 */
    uint32_t            unk_0x146C;             /* 0x146C */
} z64_col_ctxt_t;

typedef struct
{
  /* vrom addresses */
  uint32_t          tex_start;                /* 0x0000 */
  uint32_t          tex_end;                  /* 0x0004 */
  uint32_t          pal_start;                /* 0x0008 */
  uint32_t          pal_end;                  /* 0x000C */
                                              /* 0x0010 */
} z64_sky_image_t;

typedef struct
{
  char              unk_00_[0x0128];          /* 0x0000 */
  char             *textures[2];              /* 0x0128 */
  char             *palettes;                 /* 0x0130 */
  Gfx              *gfx;                      /* 0x0134 */
  char              unk_01_[0x0004];          /* 0x0138 */
  char             *vtx;                      /* 0x013C */
  int16_t           mode;                     /* 0x0140 */
  char              unk_02_[0x0006];          /* 0x0142 */
  float             f148;                     /* 0x0148 */
  char              unk_03_[0x0004];          /* 0x014C */
                                              /* 0x0150 */
} z64_sky_ctxt_t;

typedef struct
{
  /* file loading params */
  uint32_t          vrom_addr;                /* 0x0000 */
  void             *dram_addr;                /* 0x0004 */
  uint32_t          size;                     /* 0x0008 */
  /* debug stuff */
  char             *filename;                 /* 0x000C */
  int32_t           line;                     /* 0x0010 */
  int32_t           unk_00_;                  /* 0x0014 */
  /* completion notification params */
  OSMesgQueue      *notify_mq;                /* 0x0018 */
  OSMesg            notify_msg;               /* 0x001C */
                                              /* 0x0020 */
} z64_getfile_t;

typedef struct
{
  int16_t           id;                       /* 0x0000 */
  char              pad_00_[0x0002];          /* 0x0002 */
  void             *data;                     /* 0x0004 */
  z64_getfile_t     getfile;                  /* 0x0008 */
  OSMesgQueue       load_mq;                  /* 0x0028 */
  OSMesg            load_m;                   /* 0x0040 */
                                              /* 0x0044 */
} z64_mem_obj_t;

typedef struct
{
  void             *obj_space_start;          /* 0x0000 */
  void             *obj_space_end;            /* 0x0004 */
  uint8_t           n_objects;                /* 0x0008 */
  uint8_t           n_special;                /* 0x0009 */
  uint8_t           keep_index;               /* 0x000A */
  uint8_t           skeep_index;              /* 0x000B */
  z64_mem_obj_t     objects[19];              /* 0x000C */
                                              /* 0x0518 */
} z64_obj_ctxt_t;

typedef struct /* z64_actor_ctxt_t */
{
    /* game_t 0x1CA0 */
    uint8_t         unk_0x0000;             /* 0x0000 */
    uint8_t         unk_0x0001;             /* 0x0001 */
    uint8_t         unk_0x0002;             /* 0x0002 */
    uint8_t         unk_0x0003;             /* 0x0003 */
    int8_t          unk_0x0004;             /* 0x0004 */
    uint8_t         unk_0x0005;             /* 0x0005 */
    char            unk_0x0006[5];          /* 0x0006 */
    int8_t          unk_0x000B;             /* 0x000B */
    char            unk_0x000C[2];          /* 0x000C */
    uint8_t         n_actors_loaded;        /* 0x000E */
    uint8_t         unk_0x000F;             /* 0x000F */
    struct
    {
        int32_t     count;                  /* 0x0000 */
        z64_actor_t  *first;                 /* 0x0004 */
        int32_t     unk;                    /* 0x0008 */
                                            /* 0x000C */

    }               actor_list[16];         /* 0x0010 */
    char            unk_0x00D0[0x50];       /* 0x00D0 */
    struct
    {
        Mtx            unk_0x0120;         /* 0x0120 */
        float           unk_0x0160;         /* 0x0160 */
        float           unk_0x0164;         /* 0x0164 */
        int16_t         unk_0x0168;         /* 0x0168 */
        uint8_t         unk_0x016A;         /* 0x016A */
        uint8_t         unk_0x016B;         /* 0x016B */
        int8_t          unk_0x016C;         /* 0x016C */
        struct
        {
            float           unk_0x00;       /* 0x0000 */
            float           unk_0x04;       /* 0x0004 */
            float           unk_0x08;       /* 0x0008 */
            float           unk_0x0C;       /* 0x000C */
            int32_t         unk_0x10;       /* 0x0010 */
                                            /* 0x0014 */

        }               unk_0x0170[3];      /* 0x0170 */
        int32_t         unk_0x01AC;         /* 0x01AC */
        int32_t         unk_0x01B0;         /* 0x01B0 */
        int32_t         unk_0x01B4;         /* 0x01B4 */
    };
    int32_t         switch_1;               /* 0x01B8 perm */
    int32_t         switch_2;               /* 0x01BC perm */
    int32_t         switch_3;               /* 0x01C0 */
    int32_t         switch_4;               /* 0x01C4 */
    int32_t         chest;                  /* 0x01C8 */
    int32_t         clear;                  /* 0x01CC */
    int32_t         unk_0x01D0;             /* 0x01D0 */
    int32_t         collectible_1;          /* 0x01D4 Perm */
    int32_t         collectible_2;          /* 0x01D8 */
    int32_t         collectible_3;          /* 0x01DC */
    int32_t         collectible_4;          /* 0x01E0 */
    struct
    {
        char        unk_0x00[0x0A];         /* 0x0000 */
        int8_t      unk_0x0A;               /* 0x000A */
        int8_t      unk_0x0B;               /* 0x000B */
        int16_t     unk_0x0C;               /* 0x000C */
        int16_t     unk_0x0E;               /* 0x000E */
                                            /* 0x0010 */
    }   unk_0x01E4;                         /* 0x01E4 */
    int8_t          unk_0x01F4;             /* 0x01F4 */
    uint8_t         unk_0x01F5;             /* 0x01F5 */
    float           unk_0x01F8;             /* 0x01F8 */
    char            unk_0x01FC[0x54];       /* 0x01FC */

    int32_t         unk_0x0250;             /* 0x0250 */
    char            unk_0x0254[0x14];       /* 0x0254 */
    uint8_t         unk_0x0268;             /* 0x0268 */
    char            unk_0x0269[3];
    char            unk_0x026C[0x18];       /* 0x026C */
} z64_actor_ctxt_t;

typedef struct
{
  char              unk_00_;                  /* 0x0000 */
  int8_t            n_entries;                /* 0x0001 */
  char              pad_00_[0x0002];          /* 0x0002 */
  uint32_t          seg_start;                /* 0x0004 */
  uint32_t          seg_end;                  /* 0x0008 */
                                              /* 0x000C */
} z64_sr_mesh_t;

typedef struct
{
  int8_t            room_idx_1;               /* 0x0000 */
  int8_t            effect_1;                 /* 0x0001 */
  int8_t            room_idx_2;               /* 0x0002 */
  int8_t            effect_2;                 /* 0x0003 */
  int16_t           actor_id;                 /* 0x0004 */
  z64_xyz_t         pos;                      /* 0x0006 */
  z64_angle_t       rot;                      /* 0x000C */
  int16_t           variable;                 /* 0x000E */
                                              /* 0x0010 */
} z64_tnsn_actor_t;

typedef struct
{
  int8_t            index;                    /* 0x0000 */
  char              unk_00_[0x0001];          /* 0x0001 */
  uint8_t           bhv_z;                    /* 0x0002 */
  uint8_t           bhv_x;                    /* 0x0003 */
  uint8_t           echo;                     /* 0x0004 */
  int8_t            show_invis_act;           /* 0x0005 */
  char              pad_00_[0x0002];          /* 0x0006 */
  z64_sr_mesh_t    *mesh_hdr;                 /* 0x0008 */
  void             *file;                     /* 0x000C */
  char              unk_01_[0x0004];          /* 0x0010 */
                                              /* 0x0014 */
} z64_room_t;

typedef struct
{
  /* room info */
  z64_room_t        rooms[2];                 /* 0x0000 */
  void             *room_space_start;         /* 0x0028 */
  void             *room_space_end;           /* 0x002C */
  /* loading info */
  uint8_t           load_slot;                /* 0x0030 */
  int8_t            load_active;              /* 0x0031 */
  char              pad_00_[0x0002];          /* 0x0032 */
  void             *load_ptr;                 /* 0x0034 */
  z64_getfile_t     load_getfile;             /* 0x0038 */
  OSMesgQueue       load_notify_mq;           /* 0x0058 */
  OSMesg            load_notify_msg;          /* 0x0070 */
  /* may also be used for other things, not sure */
  /* handled by the scene config for lost woods */
  int16_t           cojiro_sfx_played;        /* 0x0074 */
  int16_t           cojiro_sfx_timer;         /* 0x0076 */
  /* transition actor list */
  uint8_t           n_tnsn;                   /* 0x0078 */
  char              pad_01_[0x0003];          /* 0x0079 */
  z64_tnsn_actor_t *tnsn_list;                /* 0x007C */
                                              /* 0x0080 */
} z64_room_ctxt_t;

typedef struct
{
  char              unk_00_[0x0128];          /* 0x0000 */
  void             *icon_item;                /* 0x0128 */
  void             *icon_item_24;             /* 0x012C */
  void             *icon_item_s;              /* 0x0130 */
  void             *icon_item_lang;           /* 0x0134 */
  void             *name_texture;             /* 0x0138 */
  void             *p13C;                     /* 0x013C */
  char              unk_01_[0x0094];          /* 0x0140 */
  uint16_t          state;                    /* 0x01D4 */
  char              unk_02_[0x0012];          /* 0x01D6 */
  uint16_t          screen_idx;               /* 0x01E8 */
  char              unk_03_[0x002E];          /* 0x01EA */
  int16_t           item_cursor;              /* 0x0218 */
  char              unk_04_[0x0002];          /* 0x021A */
  int16_t           quest_cursor;             /* 0x021C */
  int16_t           equip_cursor;             /* 0x021E */
  int16_t           map_cursor;               /* 0x0220 */
  int16_t           item_x;                   /* 0x0222 */
  char              unk_05_[0x0004];          /* 0x0224 */
  int16_t           equipment_x;              /* 0x0228 */
  char              unk_06_[0x0002];          /* 0x022A */
  int16_t           item_y;                   /* 0x022C */
  char              unk_07_[0x0004];          /* 0x022E */
  int16_t           equipment_y;              /* 0x0232 */
  char              unk_08_[0x0004];          /* 0x0234 */
  int16_t           cursor_pos;               /* 0x0238 */
  char              unk_09_[0x0002];          /* 0x023A */
  int16_t           item_id;                  /* 0x023C */
  int16_t           item_item;                /* 0x023E */
  int16_t           map_item;                 /* 0x0240 */
  int16_t           quest_item;               /* 0x0242 */
  int16_t           equip_item;               /* 0x0244 */
  char              unk_0A_[0x0004];          /* 0x0246 */
  int16_t           quest_hilite;             /* 0x024A */
  char              unk_0B_[0x0018];          /* 0x024C */
  int16_t           quest_song;               /* 0x0264 */
  char              unk_0C_[0x0016];          /* 0x0266 */
  /* unknown structure */
  char              s27C[0x0038];             /* 0x027C */
                                              /* 0x02B4 */
} z64_pause_ctxt_t;

/* lighting structs */
typedef struct
{
  int8_t            dir[3];                   /* 0x0000 */
  uint8_t           col[3];                   /* 0x0003 */
                                              /* 0x0006 */
} z64_light1_t;

typedef struct
{
  int16_t           x;                        /* 0x0000 */
  int16_t           y;                        /* 0x0002 */
  int16_t           z;                        /* 0x0004 */
  uint8_t           col[3];                   /* 0x0006 */
  char              pad_00_[0x0001];          /* 0x0009 */
  int16_t           intensity;                /* 0x000A */
                                              /* 0x000C */
} z64_light2_t;

typedef union
{
  z64_light1_t      light1;                   /* 0x0000 */
  z64_light2_t      light2;                   /* 0x0000 */
                                              /* 0x000C */
} z64_lightn_t;

typedef struct
{
  uint8_t           type;                     /* 0x0000 */
  char              pad_00_[0x0001];          /* 0x0001 */
  z64_lightn_t      lightn;                   /* 0x0002 */
                                              /* 0x000E */
} z64_light_t;

typedef struct z64_light_node_s z64_light_node_t;
struct z64_light_node_s
{
  z64_light_t      *light;                    /* 0x0000 */
  z64_light_node_t *prev;                     /* 0x0004 */
  z64_light_node_t *next;                     /* 0x0008 */
                                              /* 0x000C */
};

typedef struct
{
  uint32_t          n_nodes;                  /* 0x0000 */
  uint32_t          current_node;             /* 0x0004 */
  z64_light_node_t  nodes[32];                /* 0x0008 */
                                              /* 0x0188 */
} z64_light_queue_t;

typedef struct
{
  z64_light_node_t *light_list;               /* 0x0000 */
  uint8_t           ambient[3];               /* 0x0004 */
  uint8_t           fog[3];                   /* 0x0007 */
  int16_t           fog_position;             /* 0x000A */
  int16_t           draw_distance;            /* 0x000C */
  char              pad_00_[0x0002];          /* 0x000E */
                                              /* 0x0010 */
} z64_lighting_t;

typedef struct
{
  vec3s_t pos;
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t unk;
  int16_t radius;
} z64_light_params_pos_t;

typedef struct
{
  uint8_t type;
  z64_light_params_pos_t params;
} z64_lightinfo_pos_t;

typedef struct
{
  uint8_t type;
  uint8_t _pad;
  uint16_t params;
} z64_lightinfo_t;

typedef struct
{
  int8_t            numlights;                /* 0x0000 */
  char              pad_00_[0x0007];          /* 0x0001 */
  Lightsn           lites;                    /* 0x0008 */
                                              /* 0x0080 */
} z64_gbi_lights_t;

typedef void (*z64_light_handler_t)(z64_gbi_lights_t*, z64_lightn_t*,
                                    z64_actor_t*);
typedef struct
{
    char            view_magic[4];          /* 0x0000 */
    z64_gfx_t        *gfx;                   /* 0x0004 */
    struct
    {
        uint32_t        top;                /* 0x0008 */
        uint32_t        bottom;             /* 0x000C */
        uint32_t        left;               /* 0x0010 */
        uint32_t        right;              /* 0x0014 */
    } screen;
    float           camera_distance;        /* 0x0018 */
    float           fog_distance;           /* 0x001C */
    float           z_distance;             /* 0x0020 */
    char            unk_0x24[0x004];        /* 0x0024 */
    z64_xyzf_t       unk_0x28;               /* 0x0028 */
    z64_xyzf_t       unk_0x34;
    z64_xyzf_t       unk_0x40;
    Vp              viewport_movemem;       /* 0x0050 */
    Mtx             unk_mtx_0x60;
    Mtx             unk_mtx_0xA0;
    char            unk_0x00E0[0x40];       /* 0x00E0 */
    Mtx            *unk_mtx_0x60_task;      /* 0x0120 */
    Mtx            *unk_mtx_0xA0_task;      /* 0x0124 */
    float           unk_0x128[0x09];        /* 0x0128 */
    char            unk_0x14C[0x10];        /* 0x014C */
    uint16_t        perspnorm_scale;        /* 0x015C */
    uint32_t        unk_0x160;              /* 0x0160 */
    uint32_t        unk_0x164;              /* 0x0168 */
} z64_view_t;

typedef struct{
    char        unk_0x00[0x168];    /* 0x0000 */
    void       *icon_item_static;   /* 0x0168 */
    void       *icon_item_24;       /* 0x016C */
    void       *icon_item_map;      /* 0x0170 */
    void       *icon_text;          /* 0x0174 */
    void       *unk_text_0x178;     /* 0x0178 */
    Gfx        *bg_dlist;           /* 0x017C */
    char        unk_0x180[0x6C];    /* 0x0180 */
    uint16_t    state;              /* 0x01EC */
    uint16_t    debug_menu;         /* 0x01EE */
    char        unk_0x1F0[0x10];    /* 0x01F0 */
    uint16_t    switching_screen;   /* 0x0200 */
    uint16_t    unk_0x202;          /* 0x0202 */
    uint16_t    screen_idx;         /* 0x0204 */
    char        unk_0x206[0x3C];    /* 0x0206 */
    uint16_t    item_x;             /* 0x0242 */
    char        unk_0x244[0x4];     /* 0x0244 */
    uint16_t    mask_x;             /* 0x0248 */
    char        unk_0x24A[0x2];     /* 0x024A */
    uint16_t    item_y;             /* 0x024C */
    char        unk_0x24E[0x4];     /* 0x024E */
    uint16_t    mask_y;             /* 0x0252 */
    char        unk_0x254[0x8];     /* 0x0254 */
    uint16_t    selected_item;      /* 0x025C */
    uint16_t    item_item;          /* 0x025E */
    uint16_t    map_item;           /* 0x0260 */
    uint16_t    quest_item;         /* 0x0262 */
    uint16_t    mask_item;          /* 0x0264 */
    uint16_t    unk_0x266;          /* 0x0266 */
    uint16_t    item_cell;          /* 0x0268 */
    uint16_t    map_cell;           /* 0x026A */
    uint16_t    quest_cell;         /* 0x026C */
    uint16_t    mask_cell;          /* 0x026E */
} z2_pause_ctxt_t;                  /* 0x0270 */

typedef struct{
    char        unk_0x00[0x170];        /* 0x0000 */
    void       *parameter;       /* 0x0170 */
    void       *do_action_static;       /* 0x0174 */
    void       *icon_item_static;       /* 0x0178 */
    void       *minimap_texture;        /* 0x017C */
    char        unk_0x180[0x04];        /* 0x0180 */
    uint32_t    action_rom_addr;        /* 0x0184 */
    void       *action_ram;             /* 0x0188 */
    uint32_t    action_size;            /* 0x018C */
    char        unk_0x190[0xD4];        /* 0x0190 */
    union{
        struct{
            uint16_t    fadeout_alpha;          /* 0x0264 */
            uint16_t    a_alpha;                /* 0x0266 */
            uint16_t    b_alpha;                /* 0x0268 */
            uint16_t    c_left_alpha;           /* 0x026A */
            uint16_t    c_down_alpha;           /* 0x026C */
            uint16_t    c_right_alpha;          /* 0x026E */
            uint16_t    hearts_alpha;           /* 0x0270 */
            uint16_t    rupees_alpha;           /* 0x0272 */
        };
        uint16_t        alphas[0x08];           /* 0x0264 */
    };               
    char        unk_0x0274[0x9A];       /* 0x0274 */
    uint8_t     restriction_flags[0xC]; /* 0x030E */
    char        unk_0x031A[0x2E];       /* 0x031A */
} z64_if_ctxt_t;     

/* game context */
typedef struct {
    z64_game_state_t           common;                 /* 0x00000 */
    uint16_t            scene_index;            /* 0x000A4 */
    uint8_t             scene_draw_id;          /* 0x000A6 */
    char                unk_0x000A7[9];         /* 0x000A7 */
    void               *scene_addr;             /* 0x000B0 */
    char                unk_0x00B4[4];          /* 0x000B4 */
    z64_view_t           view_scene;             /* 0x000B8 */
    z64_camera_t         cameras[4];             /* 0x00220 */
    z64_camera_t        *active_cameras[4];      /* 0x00800 */
    int16_t             camera_cur;             /* 0x00810 */
    int16_t             camera_next;            /* 0x00812 */
    char                unk_0x814[0x1C];        /* 0x00814 */
    z64_col_ctxt_t       col_ctxt;               /* 0x00830 */
    z64_actor_ctxt_t     actor_ctxt;             /* 0x01CA0 */
    char                unk_0x1F24[0x04];       /* 0x01F24 */
    void               *cutscene_ptr;           /* 0x01F28 */
    int8_t              cutscene_state;         /* 0x01F2C */
    char                unk_0x1F2D[0x148FD];    /* 0x01F2D */
    uint8_t             message_state_1;        /* 0x1682A */
    char                unk_0x1682B[0xFD];      /* 0x1682B */
    uint8_t             message_state_2;        /* 0x16928 */
    char                unk_0x16829[0x02];      /* 0x16929 */
    uint8_t             message_state_3;        /* 0x1692B */
    char                unk_0x1692C[0xBC];      /* 0x1692C */
    z64_if_ctxt_t       if_ctxt;                /* 0x169E8 */
    char                unk_0x16D30[0x1058]     /* 0x16D30 */
    z64_obj_ctxt_t      obj_ctx;                /* 0x17D88 */
    z64_room_ctxt_t     room_ctx;               /* 0x186E0 */
    uint8_t             room_cnt;               /* 0x18760 */
    char                unk_0x18761[0xDF];      /* 0x18761 */
    uint32_t            gameplay_frames;        /* 0x18840 */
    char                unk__LINE__[0x31];      /* 0x18844 */
    uint8_t             scene_load_flag;        /* 0x18875 */
    char                unk_0x18876[0x04];      /* 0x18876 */
    uint16_t            entrance_index;         /* 0x18878 */
} z64_global_t;

typedef struct {
	/* 0x00 */ uint32_t printer; /* 0x800FBB60 */
	/* 0x04 */ uint32_t dlist_end;
	/* 0x08 */ uint16_t x;
	/* 0x0A */ uint16_t y;
	/* 0x0C */ uint16_t unk1;
	/* 0x0E */ uint8_t unk2;
	/* 0x0F */ uint8_t unk3;
	/* 0x10 */ uint32_t unk4;
} z64_debug_text_t;

/*enum DISP{
	WORK = 0x01BC,
	OVERLAY = 0x02B0,
	POLY_OPA = 0x02C0,
	POLY_XLU = 0x02D0
};*/

/* skelanime */
typedef struct {
  /* 0x00 */ uint8_t limb_count;
  /* 0x01 */ uint8_t unk1; /* Probably Padding*/
  /* 0x02 */ uint8_t dlist_count;
  /* 0x03 */ uint8_t unk2; /* Probably Padding */
  /* 0x04 */ uint32_t limb_index;
  /* 0x08 */ uint32_t anim_current;
  /* 0x0C */ int32_t unk3; /* 0x00000000 */
  /* 0x10 */ float anim_frame_count;
  /* 0x14 */ float unk4;
  /* 0x18 */ float anim_current_frame;
  /* 0x1C */ float anim_playback_speed;
  /* 0x20 */ void* draw_table_rot;/*uint32_t unk5;*/ /* Actor Drawing Table? */
  /* 0x24 */ void* draw_table_pos;/*uint32_t unk6;*/
  /* 0x28 */ uint32_t unk7;
  /* 0x2C */ uint32_t unk8;
  /* 0x30 */ void* draw_table_func;/*uint32_t func_unk9;*/ /* Some function pointer */
  /* 0x34 */ int32_t pad1; /* 0x00000000 */
  /* 0x38 */ int32_t pad2; /* 0x00000000 */
  /* 0x3C */ uint16_t unk10;
  /* 0x3E */ uint16_t unk11; /* Probably Padding */
  /* 0x40 */
} z64_skelanime_t;

typedef struct
{
  u8 unk00[0x4C];
  z64_skelanime_t skelanime;
} z64_skelanime_weighted_t;



/* collision */
typedef enum z64_bumper_effect_e { /* Elemental Damage Effects */
    BUMP_FX_ELECTRIC=3,
    BUMP_FX_FIRE=1,
    BUMP_FX_ICE=2,
    BUMP_FX_KNOCKBACK=0
} z64_bumper_effect_t;

typedef enum z64_collider_type_e { /* Collider Types */
    COL_TYPE_CYLINDER=1,
    COL_TYPE_CYLINDER_GROUP=0,
    COL_TYPE_QUAD=3,
    COL_TYPE_TRIANGLE_GROUP=2
} z64_collider_type_t;

typedef struct z64_collider_s { /* Collider Structure */
    z64_actor_t* actor; /* Actor Instance */
    z64_actor_t* unk_actor_1;
    z64_actor_t* colliding_actor; /* Hit with an item */
    z64_actor_t* unk_actor_3;
    uint8_t collider_flags; /* Compared to 0x11 */
    uint8_t collide_flags; /* Compared to 0x10 */
    uint8_t mask_a; /* Bitwise-and compared to 0x13 */
    uint8_t mask_b; /* Bitwise-and compared to 0x12 */
    uint8_t unk_0x14;
    uint8_t type; /* Cylinder Collection, Cylinder, Triangle Collection, Quad */
} z64_collider_t;

typedef struct z64_collider_bump_s {
    int32_t flags; /* Collision Exclusion Mask */
    uint8_t effect; /* Damage Effect (Knockback, Fire, etc.) */
    uint8_t unk_0x05;
    int32_t unk_0x08;
} z64_collider_bump_t;

typedef struct z64_collider_touch_s {
    int32_t flags; /* Toucher Attack Identifier Flags */
    uint8_t unk_0x04;
    uint8_t damage; /* Damage or Stun Timer */
} z64_collider_touch_t;

typedef struct z64_collider_body_s { /* Collider Body typedef structure */
    z64_collider_touch_t toucher;
    z64_collider_bump_t bumper;
    uint8_t flags;
    uint8_t toucher_flags;
    uint8_t bumper_flags;
    uint8_t flags_2;
    int32_t unk_0x18;
    z64_collider_t * collider;
    int32_t unk_0x20;
    void * colliding;
} z64_collider_body_t;

typedef struct z64_collider_cylinder_s {
    z64_collider_body_t body;
    vec3s_t unk_0x28;
    int16_t unk_0x2E;
    vec3s_t position;
    int16_t unk_0x36;
    int32_t unk_0x38;
    uint8_t unk_0x3C;
} z64_collider_cylinder_t;

typedef struct z64_collider_tri_s {
    z64_collider_body_t body;
    vec3f_t point_a;
    vec3f_t point_b;
    vec3f_t point_c;
    vec3f_t unit_normal;
    float normal_dist;
} z64_collider_tri_t;

typedef struct z64_collider_cylinder_collection_s {
    z64_collider_t base;
    int32_t count;
    z64_collider_cylinder_t * list;
} z64_collider_cylinder_collection_t;

typedef struct z64_collider_cylinder_collection_init_s {
  uint8_t unk_0x0000;
  uint8_t unk_0x0001;
  uint8_t unk_0x0002;
  uint8_t unk_0x0003;
  uint8_t unk_0x0004;
  uint8_t pad_0x0005; /* Likely Padding for Alignment */
  uint32_t collider_n; /* Number of Colliders */
  void* pointer; /* Pointer to Collider Initialization Data */
} z64_collider_cylinder_collection_init_t;

typedef struct z64_collision_body_info_s { /* Initialization Variables (in overlay) for z64_collider */
    uint8_t unk_0x14;
    uint8_t collider_flags; /* Collider Flags */
    uint8_t collide_flags; /* Collide Flags */
    uint8_t mask_a; /* Bitwise-And with Mask B */
    uint8_t mask_b; /* Bitwise-And with Mask A */
    uint8_t type; /* Collider Type */
    uint8_t unk_0x06_[2]; /* 0000 */
    uint8_t body_flags;
    uint8_t unk_0x09_[3]; /* 000000 */
    int32_t toucher_mask; /* Attack Toucher Exclusion Mask */
    uint8_t bumper_effect; /* Damage Effect (Knockback, Fire, etc.) */
    uint8_t toucher_damage; /* Damage Amount or Stun Timer */
    uint8_t unk_0x12_[2]; /* 0000 */
    int32_t bumper_mask; /* Bumper Exclusion Mask */
    uint8_t unk_0x18_[4]; /* 00000000 */
    uint8_t toucher_flags; /* Attack Toucher Flags */
    uint8_t bumper_flags; /* Bumper Flags */
    uint8_t body_flags_2;
    uint8_t unk_0x1F; /* 00 */
} z64_collision_body_info_t;

typedef struct z64_collider_cylinder_init_s { /* Initialization Variables (in overlay) for z64_collider_cylinder_main_t */
    z64_collision_body_info_t body;
    int16_t radius; /* Cylinder Radius */
    int16_t height; /* Cylinder Height */
    int16_t y_shift; /* Shift Cylinder on Y Axis */
    vec3s_t position; /* {X, Y, Z} position of Cylinder */
} z64_collider_cylinder_init_t;

typedef struct z64_collider_cylinder_main_s { /* Previously (z64_capsule) */
    z64_collider_t base;
    z64_collider_body_t body;
    int16_t radius;
    int16_t height;
    int16_t y_shift;
    vec3s_t position;
} z64_collider_cylinder_main_t;

typedef struct z64_collider_quad_s {
    z64_collider_t base;
    z64_collider_body_t body;
    vec3f_t point_a;
    vec3f_t point_b;
    vec3f_t point_c;
    vec3f_t point_d;
    vec3s_t bounding_max;
    vec3s_t bounding_min;
} z64_collider_quad_t;

typedef struct z64_collider_tri_collection_s {
    z64_collider_t base;
    int32_t count;
    z64_collider_tri_t * list;
} z64_collider_tri_collection_t;

typedef struct z64_dynapoly {
    uint32_t    polyID;                /* 0x0000  counter, starts from 0, each dynapoly actor gets a new id*/
    float       push_movement;         /* 0x0004 */
    float       unk_03;                /* 0x0008 */
    uint16_t    push_direction;        /* 0x000A */
    uint16_t    unk_05;                /* 0x000C */
    uint32_t    movement;              /* 0x0010 &>>01 updates position of actors on top, &>>02 updates rotation of actors on top */
    uint8_t     flags;                 /* 0x0014 &>>01 actor on top &>>02 Link on top &>>04 Link above it or on top &>>08 heavy actor on top */
    char        padding[0x0003];
} z64_dynapoly_t;

typedef struct
{
  int16_t n_at;
  uint32_t hz_0x02;
  z64_collider_t* at_list[50];
  int32_t n_ac;
  z64_collider_t* ac_list[60];
  int32_t n_ot;
  z64_collider_t* ot_list[50];
} z64_hit_ctxt_t;

enum dynapoly_move_flag {
  DPM_NONE = 0b00,
	DPM_PLAYER = 0b01,
 	DPM_ENEMY = 0b10
};

/* Damage chart notes
 * sword0 and sword1 refer to the Kokiri/Master Sword,
   longsword refers to the Biggoron Sword / Giant's Knife,
   and brokensword refers to the broken longsword
 * everything held together in a union { ... } shares the same setting
 */
typedef struct z64_damagechart_init {
// TODO: would there be a hammer_shockwave, or do actors that respond to it do it differently?
	u8
/* 00 */
			misc_dekunut
	;
/* 01 */	union {
				u8
					misc_dekustick,

					misc_pot
				;
			};
	u8
/* 02 */	misc_slingshot,
/* 03 */	misc_explosion,
/* 04 */	misc_boomerang,

/* 05 */	arrow,

/* 06 */	hammer_swing,

/* 07 */	misc_hookshot,

/* 08 */	sword0_slash,
/* 09 */	sword1_slash,
/* 0A */	longsword_slash,

/* 0B */	arrow_fire,
/* 0C */	arrow_ice,
/* 0D */	arrow_light,
/* 0E */	arrow_wind,  // TODO are these really Wind/Spirit/Shadow?
/* 0F */	arrow_spirit,
/* 10 */	arrow_shadow,

/* 11 */	magic_fire,
/* 12 */	magic_ice,   // confirmed
/* 13 */	magic_light, // confirmed

/* 14 */	unk0,
/* 15 */	unk1,

/* 16 */	sword0_spin,
/* 17 */	longsword_spin, // TODO confirm if this is correct
/* 18 */	sword1_spin
	;
/* 19 */	union {
				u8
					sword0_jump,
					sword0_bigspin,

					brokensword_jump,
					brokensword_bigspin
				;
			};
/* 1A */	union {
				u8
					longsword_jump,
					longsword_bigspin
				;
			};
/* 1B */	union {
				u8
					sword1_jump,
					sword1_bigspin
				;
			};
	u8
/* 1C */	unk2,
/* 1D */	unk3,
/* 1E */	hammer_jump,
/* 1F */	unk4
	;
} z64_damagechart_init_t;

#define DAMAGE_HEARTS(HA0) (int)((HA0) * 16)

enum damage_effect {
  KNOCKBACK = 0x00,
  FIRE = 0x01,
  ICE = 0x02,
  ELECTRIC = 0x03
};

#endif
