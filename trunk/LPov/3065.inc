// 3065 - Brick  1 x  2 without Centre Stud
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3065_dot_dat)
#declare _3065_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      box { <-20,0,-10>, <20,24,10> }
      box { <-16,0,-6>, <16,24.01,6> }
    }
    #if (L3Studs)
    object {
      stud_dot_dat
      translate <-10,0,0>
    }
    object {
      stud_dot_dat
      translate <10,0,0>
    }
    #end
  }
  #else
  box { <-20,0,-10>, <20,24,10> }
  #end
#end        