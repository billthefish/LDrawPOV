// 298 - Lever Small Base
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_298_dot_dat)
#declare _298_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      cylinder { <0,8,0>, <0,2,0>, 8 }
      cylinder { <0,8.01,0>, <0,2,0>, 6 }
      box { <-2,-8,5>, <2,8,-5> }
    }  
    difference {
      merge {
        difference {
          sphere { <0,2,0>, 8 }
          box { <-2,8,8>, <2,-8,-8> }
        }
        difference {
          sphere { <0,2,0>, 8 }
          box { <-2,-8,5>, <2,8,-5> }
          plane { y, 1 }
          plane { -x, -2 }
          plane { x, -2 }
        }
      }  
      plane { -y,-2 }
    }
  }
  #else
  box { <-8,8,-8>,<8,-6,8> }
  #end
#end