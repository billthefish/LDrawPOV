// 3673 - Technic Pin
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3673_dot_dat)
#declare _3673_dot_dat =
  merge {
    object { connect_dot_dat rotate z*90 rotate x*90 }
    object { connect_dot_dat rotate z*-90 rotate x*90 }
  }
#end    