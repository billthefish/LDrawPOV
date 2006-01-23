// 3039 - Slope Brick 45  2 x  2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "macros.inc"

#ifndef (_3036_dot_dat)
#declare _3036_dot_dat =
  object {
    difference {
      box { <-20,0,10> , <20,24,-30> }
      plane { y, 0 
              rotate x*45
              translate z*-10
            }  
      
  }
#end