// 4274 - Technic Pin 1/2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_4274_dot_dat)
#declare _4274_dot_dat =
  #if (L3Quality)
  merge {
    object { stud2a_dot_dat rotate x*90 }
    object { connect_dot_dat rotate x*-90 }
  }
  #else
  box { <8,8,4>,<-8,-8,-20> }
  #end
#end   