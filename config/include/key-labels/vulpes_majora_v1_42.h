/*
 *                  Vulpes Majora 42 KEY MATRIX / LAYOUT MAPPING
 * 
 *       ╭────────────────────────╮               ╭────────────────────────╮
 *       │  0   1   2   3   4   5 │               │  6   7   8   9  10  11 │
 *       │ 12  13  14  15  16  17 │               │ 18  19  20  21  22  23 │
 *       │ 24  25  26  27  28  29 │╭─────────────╮│ 30  31  32  33  34  35 │
 *       ╰───────────╮ 36  37  38 ││ 39  40  41  ││ 42  43  44 ╭───────────╯
 *        ╭────╮     ├────────────┤╰─────────────╯├────────────┤     ╭────╮
 *        │ 45 │     │ 46  47  48 │               │ 49  50  51 │     │ 52 │
 *   ╭────╯    ╰────╮╰────────────╯               ╰────────────╯╭────╯    ╰────╮
 *   │ 53   54   55 │                                           │ 56   57   58 │
 *   ╰────╮    ╭────╯                                           ╰────╮    ╭────╯
 *        │ 59 │                                                     │ 60 │
 *        ╰────╯                                                     ╰────╯
 * 
 *      ╭─────────────────────────╮               ╭─────────────────────────╮
 *      │ LT5 LT4 LT3 LT2 LT1 LT0 │               │ RT0 RT1 RT2 RT3 RT4 RT5 │
 *      │ LM5 LM4 LM3 LM2 LM1 LM0 │               │ RM0 RM1 RM2 RM3 RM4 RM5 │
 *      │ LB5 LB4 LB3 LB2 LB1 LB0 │╭─────────────╮│ RB0 RB1 RB2 RB3 RB4 RB5 │
 *      ╰───────────╮ LH2 LH1 LH0 ││ MB1 MB2 MB3 ││ RH0 RH1 RH2 ╭───────────╯
 *      ╭─────╮     ├─────────────┤╰─────────────╯├─────────────┤     ╭─────╮
 *      │ L51 │     │ LR2 LR1 LR0 │               │ RR0 RR1 RR2 │     │ R51 │
 * ╭────╯     ╰────╮╰─────────────╯               ╰─────────────╯╭────╯     ╰────╮
 * │ L52  L53  L54 │                                             │ R52  R53  R54 │
 * ╰────╮     ╭────╯                                             ╰────╮     ╭────╯
 *      │ L55 │                                                       │ R55 │
 *      ╰─────╯                                                       ╰─────╯
 */

#pragma once

#include "zmk-helpers/key-labels/42.h"

#define MB1 39 // mouse buttons
#define MB2 40
#define MB3 41

#define LR2 46 // left 3-way rocker-switches
#define LR1 47
#define LR0 48

#define RR2 49 // right 3-way rocker-switches
#define RR1 50
#define RR0 51

#define L5U 45 // left 5-way switches
#define L5L 53
#define L5M 54
#define L5R 55
#define L5D 59

#define R5U 52 // right 5-way switches
#define R5L 56
#define R5M 57
#define R5R 58
#define R5D 60

/*
 * Key counts.
 * If you do not have all the keys in the default layout, overide the counts
 * appropriately (in the respective region) in your keyboard's keymap before
 * including `base.keymap`.
 */
#define X_LT_N 1
#define X_LM_N 1
#define X_LB_N 1
#define X_LH_N 1
#define X_MH_N 3
#define X_RT_N 1
#define X_RM_N 1
#define X_RB_N 1
#define X_RH_N 17 // 1 + 5 + 3 + 3 + 5

/* Define the following headers in your keyboard's keymap before including `base.keymap`.
#define X_LT LT5
#define X_LM LM5
#define X_LB LB5
#define X_LH LH2
#define X_MB MB1 MB2 MB3 
#define X_RT RT5
#define X_RM RM5
#define X_RB RB5
#define X_RH RH2 L5U LR2 LR1 LR0 RR0 RR1 RR2 R5U L5L L5M L5R R5L R5M R5R L5D R5D
 */
