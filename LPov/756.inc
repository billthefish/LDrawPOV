// 755 - Hose Flexible Segment Center Section (open file for usage guide)
// Author: Orion Pobursky
// DAT Author: John VanZwieten

#include "primitives.inc"

#ifndef (_756_dot_dat)
#declare _756_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      sphere { <0,0,0>, 3 }
      plane { y, -1 }
    }  
    difference {
      sphere { <0,-2,0>, 3 }
      plane { -y, 1 }
    }  
    sphere { <0,-0.65,0>, 1 scale <4,1.25,4> }
    sphere { <0,0,0>, 1 matrix <4,0,0,0,-1.25,0,0,0,-4,0,-1.25,0> }
    cylinder { <0,-1.25,0>, <0,-0.65,0>, 4 }
  }
  #else
  box { <4,-3,4>, <-4,3,-4> }  
  #end
#end       