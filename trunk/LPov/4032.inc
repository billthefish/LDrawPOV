// 4032 - Plate  2 x  2 Round
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_4032_dot_dat)
#declare _4032_dot_dat =
  #if (L3Quality)
  #if (L3Studs)
  merge {
    object { stud10_dot_dat translate <10,0,-10> }
    object { stud10_dot_dat translate <-10,0,-10> }
    object { stud10_dot_dat translate <-10,0,10> }
    object { stud10_dot_dat translate <10,0,10> }
    object { stud4_dot_dat translate <0,4,0>  }
  #end
    difference {
      cylinder { <0,0,0>, <0,8,0>, 20 }
      object {
        axle_dot_dat
        scale <0,6,0>
        translate <0,-1,0>
      }   
      box { <-16,4,16>, <16,8.01,-16> }   
    }
  #if (L3Studs)     
  }
  #end
  #else
  box { <-20,0,-20>, <20,8,20> }
  #end
#end            