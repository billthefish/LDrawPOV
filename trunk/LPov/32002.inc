// 32002 - Technic Pin 3/4
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _32002_dot_dat =
  merge {
    object { connect_dot_dat rotate x*-90 }
    object { connect3_dot_dat rotate x*90 }
  } 