// 3960 - Space Radar Dish  4 x  4
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3960_dot_dat)
#declare _3960_dot_dat =
  #if (L3Quality)
  merge {
    intersection {
      difference {
        intersection {
          sphere { <0,97.75,0>, 98.26 }  
          plane { -y, 0 }
          plane { y, 16}
        }   
        intersection {
            difference {
            sphere { <0,92.93,0> 89.48 }
            plane { y, 4 }
          }  
          cylinder { <0, -1, 0>, <0, 17, 0>, 36 }
        }
      }                
      cylinder { <0, -2, 0>, <0, 18, 0>, 40 }       
    }
    #if (L3Studs)
    object {
      stud_dot_dat
    }
    #end
    difference {
      merge {
        cylinder { <0,4,0>, <0,11,0>, 10 }
        cylinder { <0,11,0>, <0,16,0>, 8 }
      }
      cylinder { <0,3,0>, <0,17,0>, 6 }
    }
    object { 
      axlehole_dot_dat
      scale <0,8,0>
      translate <0,4,0>
    }         
  }
  #else
  box { <-40,0,-40>,<40,16,40> }
  #end
#end      