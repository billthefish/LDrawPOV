// 752 - Hose Flexible End  1 x  1 x  2/3 without Tabs
// Author: Orion Pobursky
// DAT Author: Steve Bliss

#include "primitives.inc"

#ifndef (_752_dot_dat)
#declare _752_dot_dat =
  #if (L3Quality)
  difference {
    merge {
      cone { <0,0,0>, 5, <0,8,0>, 8 }
      cylinder { <0,8,0>, <0,18,0>, 8 }
    }
    cylinder { <0,-0.01,0>, <0,6.01,0>, 3 }
    cylinder { <0,6,0>, <0,10.01,0>, 4 }
    cylinder { <0,10,0>, <0,18.01,0>, 6 }
  }
  #else
  box { <-8,0,-8>, <8,18,8> }
  #end
#end    
