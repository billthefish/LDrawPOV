// 3005 - Brick  1 x  1
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _3005_dot_dat =
  merge {
    difference {
      box {
        <-10,0,10>, <10,24,-10>
      }
      box {
        <-6,4,6>, <6,24.01,-6>
      }
    }
    object {
      stud_dot_dat
    }
  }          