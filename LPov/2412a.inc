// 2412a - Tile  1 x  2 Grille without Groove
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_2412a_dot_dat)
#declare _2412a_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      box { <20,0,10>, <-20,8,-10> }
      box { <16,4,6>, <-16,8.01,-6> }
      box { <20.01,-0.01,6>, <-20.01,4,2> }
      box { <20.01,-0.01,-6>, <-20.01,4,-2> }
      box { <16,4.01,6>, <-16,3.99,2> }
      box { <16,4.01,-6>, <-16,3.99,-2> }
    }
    box { <3,8,1>,<-3,3.99,-1> }
    cylinder { <3,8,0>, <3,3.99,0>, 1 }
    cylinder { <-3,8,0>, <-3,3.99,0>, 1 }      
  }
  #else
    box { <20,0,10>, <-20,8,-10> }
  #end
#end        