// 4073 - Plate  1 x  1 Round
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_4073_dot_dat)
#declare _4073_dot_dat =
  #if (L3Quality)
  #if (L3Studs)
  merge {
    object { stud_dot_dat }
    object { stud4_dot_dat translate <0,7,0>  }
  #end
    cylinder { <0,0,0>, <0,3,0>, 10 }
  #if (L3Studs)     
  }
  #end
  #else
  box { <-10,0,-10>, <10,8,10> }
  #end
#end            