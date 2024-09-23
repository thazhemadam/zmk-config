/*                                 Vulpes Majora 42 KEY MATRIX / LAYOUT MAPPING

      ╭────────────────────────╮               ╭────────────────────────╮
      │  0   1   2   3   4   5 │               │  6   7   8   9  10  11 │
      │ 12  13  14  15  16  17 │               │ 18  19  20  21  22  23 │
      │ 24  25  26  27  28  29 │╭─────────────╮│ 30  31  32  33  34  35 │
      ╰───────────╮ 36  37  38 ││ 39  40  41  ││ 42  43  44 ╭───────────╯
       ╭────╮     ├────────────┤╰─────────────╯├────────────┤     ╭────╮
       │ 45 │     │ 46  47  48 │               │ 49  50  51 │     │ 52 │
  ╭────╯    ╰────╮╰────────────╯               ╰────────────╯╭────╯    ╰────╮
  │ 53   54   55 │                                           │ 56   57   58 │
  ╰────╮    ╭────╯                                           ╰────╮    ╭────╯
       │ 59 │                                                     │ 60 │
       ╰────╯                                                     ╰────╯

     ╭─────────────────────────╮               ╭─────────────────────────╮
     │ LT5 LT4 LT3 LT2 LT1 LT0 │               │ RT0 RT1 RT2 RT3 RT4 RT5 │
     │ LM5 LM4 LM3 LM2 LM1 LM0 │               │ RM0 RM1 RM2 RM3 RM4 RM5 │
     │ LB5 LB4 LB3 LB2 LB1 LB0 │╭─────────────╮│ RB0 RB1 RB2 RB3 RB4 RB5 │
     ╰───────────╮ LH2 LH1 LH0 ││ MS1 MS2 MS2 ││ RH0 RH1 RH2 ╭───────────╯
     ╭─────╮     ├─────────────┤╰─────────────╯├─────────────┤     ╭─────╮
     │ L51 │     │ LR2 LR1 LR0 │               │ RR0 RR1 RR2 │     │ R51 │
╭────╯     ╰────╮╰─────────────╯               ╰─────────────╯╭────╯     ╰────╮
│ L52  L53  L54 │                                             │ R52  R53  R54 │
╰────╮     ╭────╯                                             ╰────╮     ╭────╯
     │ L55 │                                                       │ R55 │
     ╰─────╯                                                       ╰─────╯
*/

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4 10
#define RT5 11

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 29  // left-bottom row
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH0 38  // left thumb keys
#define LH1 37
#define LH2 36

#define MS1 39
#define MS2 40
#define MS3 41

#define RH0 42  // right thumb keys
#define RH1 43
#define RH2 44

#define LR2 46 // left 3-way rocker-switches
#define LR1 47
#define LR0 48

#define RR2 49 // right 3-way rocker-switches
#define RR1 50
#define RR0 51

#define L51 45 // left 5-way switches
#define L52 53
#define L53 54
#define L54 55
#define L55 59

#define R51 52 // right 5-way switches
#define R52 56
#define R53 57
#define R54 58
#define R55 60
