/*
 *     ╭────────╮ ╭─────────────────────────╮ ╭────────╮ ╭─────────────────────────╮ ╭────────╮
 *     │ X_LT_N │ │  .    .    .    .    .  │ │ X_MT_N │ │  .    .    .    .    .  │ │ X_RT_N │
 *     │ X_LM_N │ │  .    .    .    .    .  │ │ X_MM_N │ │  .    .    .    .    .  │ │ X_RM_N │
 *     │ X_LB_N │ │  .    .    .    .    .  │ │ X_MB_N │ │  .    .    .    .    .  │ │ X_RB_N │
 *     ╰────────╯ ╰───╮────────╭─╮──────────┤ ├────────┤ ├──────────╮─╭────────╮───╯ ╰────────╯
 *                    │ X_LH_N │ │  .    .  │ │ X_MH_N │ │  .    .  │ │ X_RH_N │
 *                    ╰────────╯ ╰──────────╯ ╰────────╯ ╰──────────╯ ╰────────╯
 * 
 * The default layout has 34 keys.
 * Additional keys can be added by pre-defining any of the macros defined above to
 * the array of keycodes, before sourcing this file.
 *
 * The above diagram represents how the key clusters that can be defined are ordered.
 * Note: `N` is a placeholder for the same key on Layer N.
 *
 *  - `X_LT_1` defines the keycode on layer 1.
 *  - `X_LT` is the default value, that `X_LT_N` falls back to if undefined. 
 */

/* DEFAULT VALUES */
/* Default values for left of left half */
#ifndef X_LT  // top row, left
    #define X_LT
#endif
#ifndef X_LM  // middle row, left
    #define X_LM
#endif
#ifndef X_LB  // bottom row, left
    #define X_LB
#endif
#ifndef X_LH  // thumb row, left
    #define X_LH
#endif

/* Default values for between left and right halves */
#ifndef X_MT  // top row, middle
    #define X_MT
#endif
#ifndef X_MM  // middle row, middle
    #define X_MM
#endif
#ifndef X_MB  // bottom row, middle
    #define X_MB
#endif
#ifndef X_MH  // thumb row, middle
    #define X_MH
#endif

/* Default values right of right half */
#ifndef X_RT  // top row, right
    #define X_RT
#endif
#ifndef X_RM  // middle row, right
    #define X_RM
#endif
#ifndef X_RB  // bottom row, right
    #define X_RB
#endif
#ifndef X_RH  // thumb row, right
    #define X_RH
#endif

/* PER-LAYER VALUES */
/* Per-layer values for left of left half */
// top row, left
#ifndef X_LT_0
    #define X_LT_0 X_LT
#endif
#ifndef X_LT_1
    #define X_LT_1 X_LT
#endif
#ifndef X_LT_2
    #define X_LT_2 X_LT
#endif
#ifndef X_LT_3
    #define X_LT_3 X_LT
#endif
#ifndef X_LT_4
    #define X_LT_4 X_LT
#endif
#ifndef X_LT_5
    #define X_LT_5 X_LT
#endif
#ifndef X_LT_6
    #define X_LT_6 X_LT
#endif

// middle row, left
#ifndef X_LM_0
    #define X_LM_0 X_LM
#endif
#ifndef X_LM_1
    #define X_LM_1 X_LM
#endif
#ifndef X_LM_2
    #define X_LM_2 X_LM
#endif
#ifndef X_LM_3
    #define X_LM_3 X_LM
#endif
#ifndef X_LM_4
    #define X_LM_4 X_LM
#endif
#ifndef X_LM_5
    #define X_LM_5 X_LM
#endif
#ifndef X_LM_6
    #define X_LM_6 X_LM
#endif

// bottom row, left
#ifndef X_LB_0
    #define X_LB_0 X_LB
#endif
#ifndef X_LB_1
    #define X_LB_1 X_LB
#endif
#ifndef X_LB_2
    #define X_LB_2 X_LB
#endif
#ifndef X_LB_3
    #define X_LB_3 X_LB
#endif
#ifndef X_LB_4
    #define X_LB_4 X_LB
#endif
#ifndef X_LB_5
    #define X_LB_5 X_LB
#endif
#ifndef X_LB_6
    #define X_LB_6 X_LB
#endif

// thumb row, left
#ifndef X_LH_0
    #define X_LH_0 X_LH
#endif
#ifndef X_LH_1
    #define X_LH_1 X_LH
#endif
#ifndef X_LH_2
    #define X_LH_2 X_LH
#endif
#ifndef X_LH_3
    #define X_LH_3 X_LH
#endif
#ifndef X_LH_4
    #define X_LH_4 X_LH
#endif
#ifndef X_LH_5
    #define X_LH_5 X_LH
#endif
#ifndef X_LH_6
    #define X_LH_6 X_LH
#endif

/* Per-layer values for between left and right halves */
// top row, middle
#ifndef X_MT_0
    #define X_MT_0 X_MT
#endif
#ifndef X_MT_1
    #define X_MT_1 X_MT
#endif
#ifndef X_MT_2
    #define X_MT_2 X_MT
#endif
#ifndef X_MT_3
    #define X_MT_3 X_MT
#endif
#ifndef X_MT_4
    #define X_MT_4 X_MT
#endif
#ifndef X_MT_5
    #define X_MT_5 X_MT
#endif
#ifndef X_MT_6
    #define X_MT_6 X_MT
#endif

// middle row, middle
#ifndef X_MM_0
    #define X_MM_0 X_MM
#endif
#ifndef X_MM_1
    #define X_MM_1 X_MM
#endif
#ifndef X_MM_2
    #define X_MM_2 X_MM
#endif
#ifndef X_MM_3
    #define X_MM_3 X_MM
#endif
#ifndef X_MM_4
    #define X_MM_4 X_MM
#endif
#ifndef X_MM_5
    #define X_MM_5 X_MM
#endif
#ifndef X_MM_6
    #define X_MM_6 X_MM
#endif

// bottom row, middle
#ifndef X_MB_0
    #define X_MB_0 X_MB
#endif
#ifndef X_MB_1
    #define X_MB_1 X_MB
#endif
#ifndef X_MB_2
    #define X_MB_2 X_MB
#endif
#ifndef X_MB_3
    #define X_MB_3 X_MB
#endif
#ifndef X_MB_4
    #define X_MB_4 X_MB
#endif
#ifndef X_MB_5
    #define X_MB_5 X_MB
#endif
#ifndef X_MB_6
    #define X_MB_6 X_MB
#endif

// thumb row, middle
#ifndef X_MH_0
    #define X_MH_0 X_MH
#endif
#ifndef X_MH_1
    #define X_MH_1 X_MH
#endif
#ifndef X_MH_2
    #define X_MH_2 X_MH
#endif
#ifndef X_MH_3
    #define X_MH_3 X_MH
#endif
#ifndef X_MH_4
    #define X_MH_4 X_MH
#endif
#ifndef X_MH_5
    #define X_MH_5 X_MH
#endif
#ifndef X_MH_6
    #define X_MH_6 X_MH
#endif

/* Per-layer values for right of right half */
// top row, right
#ifndef X_RT_0
    #define X_RT_0 X_RT
#endif
#ifndef X_RT_1
    #define X_RT_1 X_RT
#endif
#ifndef X_RT_2
    #define X_RT_2 X_RT
#endif
#ifndef X_RT_3
    #define X_RT_3 X_RT
#endif
#ifndef X_RT_4
    #define X_RT_4 X_RT
#endif
#ifndef X_RT_5
    #define X_RT_5 X_RT
#endif
#ifndef X_RT_6
    #define X_RT_6 X_RT
#endif

// middle row, right
#ifndef X_RM_0
    #define X_RM_0 X_RM
#endif
#ifndef X_RM_1
    #define X_RM_1 X_RM
#endif
#ifndef X_RM_2
    #define X_RM_2 X_RM
#endif
#ifndef X_RM_3
    #define X_RM_3 X_RM
#endif
#ifndef X_RM_4
    #define X_RM_4 X_RM
#endif
#ifndef X_RM_5
    #define X_RM_5 X_RM
#endif
#ifndef X_RM_6
    #define X_RM_6 X_RM
#endif

// bottom row, right
#ifndef X_RB_0
    #define X_RB_0 X_RB
#endif
#ifndef X_RB_1
    #define X_RB_1 X_RB
#endif
#ifndef X_RB_2
    #define X_RB_2 X_RB
#endif
#ifndef X_RB_3
    #define X_RB_3 X_RB
#endif
#ifndef X_RB_4
    #define X_RB_4 X_RB
#endif
#ifndef X_RB_5
    #define X_RB_5 X_RB
#endif
#ifndef X_RB_6
    #define X_RB_6 X_RB
#endif

// thumb row, right
#ifndef X_RH_0
    #define X_RH_0 X_RH
#endif
#ifndef X_RH_1
    #define X_RH_1 X_RH
#endif
#ifndef X_RH_2
    #define X_RH_2 X_RH
#endif
#ifndef X_RH_3
    #define X_RH_3 X_RH
#endif
#ifndef X_RH_4
    #define X_RH_4 X_RH
#endif
#ifndef X_RH_5
    #define X_RH_5 X_RH
#endif
#ifndef X_RH_6
    #define X_RH_6 X_RH
#endif
