// 3963 - Brick  2 x  1 with Positioning Rockets
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "macros.inc"

#ifndef (_3963_dot_dat)

#declare _3963_cone =
  merge {
    difference {
      cone { <0,10,-10>, 6, <0,10,-30>, 10 }
      cylinder { <0,10,-10>, <0,10,-18.01>, 4 }
      cylinder { <0,10,-18>, <0,10,-30.01>, 6 }
    }
    object {
      axlehole_dot_dat
      matrix <1,0,0,0,0,-8,0,1,0,0,10,-18>
    }  
  }    
    
#declare _3963_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      box { <10,8,10>, <-10,0,30> }
      box { <6,4,14>, <-6,8.01,26> }
      box { <6,4,9.99>, <2,8.01,14.01> }
      box { <-6,4,9.99>, <-2,8.01,14.01> }
    }
    object {
      _3963_cone
    }
    object {
      _3963_cone
      rotate y*90
    }
    object {
      _3963_cone
      rotate -y*90
    }
    object {
      MakeBrick(1,1)
    }
    #if (L3Studs)
    object {
      stud_dot_dat
      translate <0,0,20>
    }
    #end  
  }
  #else
  box { <-30,0,-30>,<30,24,30> }
  #end
#end      
        