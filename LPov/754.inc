// 754 - Hose Flexible Segment Link Section (open file for usage guide)
// Author: Orion Pobursky
// DAT Author: Steve Bliss

#include "primitives.inc"

#ifndef (_754_dot_dat)
#declare _754_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      sphere { <0,0,0>, 1 scale <3.4,3,3.4> }
      plane { y, -1 }
    }  
    sphere { <0,-0.65,0>, 1 scale <4,1.25,4> }
    sphere { <0,0,0>, 1 matrix <4,0,0,0,-1.25,0,0,0,-4,0,-1.25,0> }
    cylinder { <0,-1.25,0>, <0,-0.65,0>, 4 }
  }
  #else
  box { <4,-2.5,4>, <-4,3,-4> }
  #end
#end       