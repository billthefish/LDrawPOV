// 4274 - Technic Pin 1/2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _4274_dot_dat =
  merge {
    object { stud2a_dot_dat rotate x*90 }
    object { connect_dot_dat rotate x*-90 }
  } 