// 4588 - Brick  1 x  1 Round With Fins
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _4588_dot_dat_fin =
  difference {
    box { <-20,0,2>, <-8,24,-2> }
    plane { x, 0 rotate z*32.005 translate <-10,0,0> }
    cylinder { <0,-0.01,0>, <0,24.01,0>, 10 }
  }      

#declare _4588_dot_dat =
  merge {
    object { stud2_dot_dat }
    difference {
      cylinder { <0,0,0>, <0,24,0>, 10 }
      cylinder { <0,-0.01,0>, <0,24,0>, 4 }
      cylinder { <0,4,0>, <0,24.01,0>, 6 }
      difference {
        cylinder { <0,19,0>, <0,24.01,0>, 10.01 }
        cylinder { <0,19,0>, <0,24.01,0>, 8 }
      }
    }  
    object { _4588_dot_dat_fin }
    object { _4588_dot_dat_fin rotate y*90 }
    object { _4588_dot_dat_fin rotate y*-90 }
    object { _4588_dot_dat_fin rotate y*180 }
  }  