// 4740 - Dish 2 x 2 
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _4740_dot_dat =
  merge {
    difference {
      intersection {
        difference {
          intersection {
            sphere { <0,47.5,0>, 47.88 }  
            plane { -y, 0 }
            plane { y, 8}
          }   
          intersection {
              difference {
              sphere { <0,48,0> 44.72 }
              plane { y, 4 }
            }  
            cylinder { <0, -1, 0>, <0, 17, 0>, 20 }
          }
        }                
        cylinder { <0, -2, 0>, <0, 18, 0>, 20 }       
      }
      cylinder { <0,-1,0>, <0,5,0>, 4 }
    }  
    object {
      stud2_dot_dat
    }
    object {
      stud4_dot_dat
      rotate x*180
      translate <0,4,0>
    }
  }  
         