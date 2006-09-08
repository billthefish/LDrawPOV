// 3039 - Slope Brick 45  2 x  2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3039_dot_dat)
#declare _3039_dot_dat =
  #if (L3Quality)
    merge {
      difference {
        merge {
          difference {
            box { <-20,0,10> , <20,24,-30> }
            difference {
              box { <-16,4,6> , <16,24.01,-26> }
              plane { y, 0 rotate x*-45 translate <0,4,-10> }
            }  
          }
          #if (L3Studs)
            object {
              stud4_dot_dat
              scale y * 5
              rotate x * 180
              translate <0,4,-10> 
            }
            object {
              stud_dot_dat
              translate <-10,0,-20> 
            }
            object {
              stud_dot_dat
              translate <10,0,-20> 
            }
          #end
        }
        plane { y, 0 rotate x*-45 translate <0,0,-10> }
      }            
    }
  #else
    box { <-20,0,10> , <20,24,-30> }
  #end  
#end