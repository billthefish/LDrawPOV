// 4595 - Brick  1 x  2 x  2/3 with Studs on Sides
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_4595_dot_dat)
#declare _4595_dot_dat =
  #if (L3Quality)
  #if (L3Studs)
  merge {
  #end
    difference {
      merge {
        box { <10,0,-20>, <-10,16,20> }
        cylinder { <0,10,-19.99>, <0,10,-28.01>, 6 }
        cylinder { <0,10,-27.99>, <0,10,-36>, 8 }
      }  
      box { <6,4,-16>, <-6,16.01,16> }
      cylinder { <10.01,10,-10>, <-10.01,10,-10>, 4 }
      cylinder { <10.01,10,10>, <-10.01,10,10>, 4 }
      cylinder { <0,-0.01,-10>, <0,4.01,-10>, 4 }
      cylinder { <0,-0.01,10>, <0,4.01,10>, 4 }
      cylinder { <0,10,20.01>, <0,10,-30.01>, 4 }
      cylinder { <0,10,-30>,<0,10,-36.01>, 6 }
    }
  #if (L3Studs)
    object {
      stud2_dot_dat
      translate <0,0,-10>
    }    
    object {
      stud2_dot_dat
      translate <0,0,10>
    }    
    object {
      stud2_dot_dat
      matrix <0,1,0,-1,0,0,0,0,1,10,10,-10>
    }    
    object {
      stud2_dot_dat
      matrix <0,1,0,-1,0,0,0,0,1,10,10,10>
    }    
    object {
      stud2_dot_dat
      matrix <0,1,0,1,0,0,0,0,1,-10,10,-10>
    }    
    object {
      stud2_dot_dat
      matrix <0,1,0,1,0,0,0,0,1,-10,10,10>
    }    
    object {
      stud2_dot_dat
      matrix <1,0,0,0,0,-1,0,1,0,0,10,20>
    }    
    object {
      stud3_dot_dat
      matrix <1,0,0,0,-3,-0,0,0,1,0,4,0>
    }    
  }
  #end
  #else
    box { <10,0,-36>, <-10,16,20> }
  #end
#end    
      