// 3713 - Technic Bush
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3713_dot_dat)
#declare _3713_dot_dat =
  #if (L3Quality)
  difference {
    merge {
      cylinder { <0,0,10>, <0,0,-10>, 7 }
      cylinder { <0,0,-7>, <0,0,-10>, 9 }
      cylinder { <0,0,7>, <0,0,10>, 9 }
      cone { <0,0,-7>, 9, <0,0,-6> ,7 }
      cone { <0,0,7>, 9, <0,0,6> ,7 }
    }  
    object { 
      axle_dot_dat 
      scale <0,22,0>
      rotate x*90 
      translate <0,0,-11>
    }
    box { <8,-1,-5>, <-8,1,5> }
    cylinder { <-10,10,6>,  <-10,10,11> , 6 }
    cylinder { <-10,-10,6>,  <-10,-10,11> , 6 }
    cylinder { <10,-10,6>,  <10,-10,11> , 6 }
    cylinder { <10,10,6>,  <10,10,11> , 6 }
  }
  #else
  box { <-7,-7,10>, <7,7,-10> }
  #end     
#end