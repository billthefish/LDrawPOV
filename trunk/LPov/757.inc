// 757 - ~Hose Flexible 12L Top  1 x  1 x  2/3 with Stud
// Author: Orion Pobursky
// DAT Author: Steve Bliss

#include "primitives.inc"

#ifndef (_757_dot_dat)
#declare _757_dot_dat =
  #if (L3Quality)
  #if (L3Studs)
  merge {
  #end
    difference {
      merge {
        cylinder { <0,0,0>, <0,3,0>, 10 }
        cylinder { <0,2.99,0>, <0,9,0>, 8 }
        cone { <0,9,0>, 8, <0,16,0>, 6 }
        intersection {
          merge {
            box { <-8.01,16,-2>, <8.01,9,2> }
            box { <2,16,8.01>, <-2,9,-8.01> }
          }
          cylinder { <0,16.01,0>, <0,8.99,0>, 8 }
        }
      }
      cylinder { <0,-0.01,0>, <0,16.01,0>, 4 }
    }
  #if (L3Studs)
    object {
      stud2_dot_dat
    }  
  }
  #end
  #else
  box { <10,0,10>, <-10,16,-10> }
  #end
#end          