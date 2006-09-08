// 983 - Minifig Hand
// Author: Orion Pobursky
// DAT Author: Orion Pobursky

#include "primitives.inc"

#ifndef (_983hand)
#declare _983hand =
  #if (L3Quality)
    difference {
      cylinder {
        <0,0,0>, <0,12,0>, 6
      }
      cylinder {
        <0,-0.1,0>, <0,12.1,0>, 4
      }
      box {
        <-2,-0.1,-3>, <2,12.1,-6>
      }
    }    
  #end
#end  
