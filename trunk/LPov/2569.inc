// 2569 - Antenna Whip 8H
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_2569_dot_dat)
#declare _2569_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      cylinder { <0,8,0>, <0,0,0>, 8}
      cylinder { <0,8.01,0>, <0,4,0>, 6 }
    }
    cylinder { <0,0,0>, <0,-24,0>, 4 }
    cylinder { <0,-24,0>, <0,-178,0>, 2 }
    sphere { <0,-180,0>, 4 }
  }
  #else
  box { <-8,8,-8>,<8,-184,8> }
  #end    
#end