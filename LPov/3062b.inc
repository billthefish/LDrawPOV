// 3062b - Brick  1 x  1 Round
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _3062b_dot_dat =
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
  }          