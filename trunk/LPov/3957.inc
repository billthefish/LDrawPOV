// 3957 - Antenna  4H
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3957_dot_dat)
#declare _3957_dot_dat =
  #if (L3Quality)
  difference {
    merge {
      sphere { <0,-84,0>, 4 }
      cylinder { <0,-84,0>, <0,-4,0>, 4 }
      cylinder { <0,-4,0>, <0,0,0>, 6 }
      cylinder { <0,0,0>, <0,8,0>, 8 }
    }
    merge {
      cylinder { <0,8.01,0>, <0,4,0>, 6 }
      cylinder { <0,4,0>, <0,0,0>, 4 }
    }    
  }
  #else
  box { <-8,-88,-8>, <8,8,8> }
  #end  
#end