// 755 - Hose Flexible Segment End Section (open file for usage guide)
// Author: Orion Pobursky
// DAT Author: John VanZwieten, Steve Bliss

#include "primitives.inc"

#ifndef (_755_dot_dat)
#declare _755_dot_dat =
  #if (L3Quality)
  merge {
    cone { <0,-12,0>, 2, <0,-8,0>, 4 }
    cylinder { <0,-8,0>, <0,-6,0>, 4 }
    cylinder { <0,0,0>, <0,-6,0>, 3 }
    cylinder { <0,0,0>, <0,5,0>, 5 }
  }
  #else
  box { <5,-12,5>, <-5,5,-5> }
  #end
#end       