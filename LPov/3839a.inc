// 3839a - Plate  1 x  2 with Handles Type 1
// Author: Orion Pobursky
// DAT Author: Bernd Munding

#include "macros.inc"

#ifndef (_3839a_dot_dat)
#declare _3839a_dot_dat =
  #if (L3Quality)
  merge {
    object {
      MakePlate(1,2)
    }
    cylinder {
      <26,4,10>, <26,4,-30>, 4
    }
    cylinder {
      <-26,4,10>, <-26,4,-30>, 4
    }
    box {
      <23,5,10>, <19.9,3,-10> 
    }
    box {
      <-23,5,10>, <-19.9,3,-10> 
    }
  }
  #else
  box {
    <-30, 0, 10>, <30,8,-30>
  }
  #end
#end    
