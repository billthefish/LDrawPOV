// 3062b - Brick  1 x  1 Round
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3062b_dot_dat)
#declare _3062b_dot_dat =
  #if (L3Quality)
  #if (L3Studs)
  merge {
      object { stud2_dot_dat }
  #end  
    difference {
      cylinder { <0,0,0>, <0,24,0>, 10 }
      cylinder { <0,-0.01,0>, <0,24,0>, 4 }
      cylinder { <0,4,0>, <0,24.01,0>, 6 }
      difference {
        cylinder { <0,19,0>, <0,24.01,0>, 10.01 }
        cylinder { <0,19,0>, <0,24.01,0>, 8 }
      }
    }
  #if (L3Studs)
  }
  #end          
  #else
  box { <-10,0,-10>,<10,24,10> }
  #end
#end            