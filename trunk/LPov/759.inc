// 759 - ~Hose Flexible 12L End Segment
// Author: Orion Pobursky
// DAT Author: Steve Bliss

#include "primitives.inc"

#ifndef (_759_dot_dat)
#declare _759_dot_dat =
  #if (L3Quality)
  merge {
    cylinder { <0,-4,0>, <0,20,0>, 4 }
    cylinder { <0,0,0>, <0,8,0>, 6 }
  }
  #else
  box { <-6,-4,-6>, <6,20,6> }
  #end
#end    