// 4740 - Dish 2 x 2 
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_4740_dot_dat)
#declare _4740_dot_dat =
  #if (L3Quality)
  #if (L3Studs)
  merge {
  #end
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
  #if (L3Studs)  
    object {
      stud2_dot_dat
    }
    object {
      stud4_dot_dat
      rotate x*180
      translate <0,4,0>
    }
  }
  #end
  #else
  box { <20,0,20>, <-20,8,-20> }
  #end  
#end         