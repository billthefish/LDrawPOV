// 760 - ~Hose Flexible 12L Base  1 x  1 x   2/3
// Author: Orion Pobursky
// DAT Author: Steve Bliss

#include "primitives.inc"

#ifndef (_760_dot_dat)
#declare _760_dot_dat =
  #if (L3Quality)
    difference {
      merge {
        cylinder { <0,16,0>, <0,8,0>, 8 }
        cone { <0,8,0>, 8, <0,0,0>, 6 }
        intersection {
          merge {
            box { <-8.01,8,-2>, <8.01,0,2> }
            box { <2,8,8.01>, <-2,0,-8.01> }
          }
          cylinder { <0,16.01,0>, <0,-0.01,0>, 8 }
        }
      }
      cylinder { <0,-0.01,0>, <0,16.01,0>, 4 }
    }
  #else
  box { <10,0,10>, <-10,16,-10> }
  #end
#end          