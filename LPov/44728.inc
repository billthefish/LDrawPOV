// 44728 - Bracket  1 x  2 -  2 x  2
// Author: Orion Pobursky
// DAT Author: Brent Jackson

#include "macros.inc"

#ifndef (_44728_dot_dat)
#declare _44728_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      object {
        MakePlate(1,2)
      }
      box { <16,4,-10.01>, <12,8.01,-5.99> }
      box { <-16,4,-10.01>, <-12,8.01,-5.99> }
      box { <-8,4,-10.01>, <8,8.01,-5.99> }
    }
    box { <-20,0,-10>, <20,36,-14> }
    box { <16,35.99,-10>, <-16,40,-14> }
    cylinder { <16,36,-10>, <16,36,-14>, 4 }
    cylinder { <-16,36,-10>, <-16,36,-14>, 4 }
    #if (L3Studs)
    object {
      stud2_dot_dat
      matrix <0,1,0,0,0,1,1,0,0,10,10,-14>
    }  
    object {
      stud2_dot_dat
      matrix <0,1,0,0,0,1,1,0,0,-10,10,-14>
    }  
    object {
      stud2_dot_dat
      matrix <0,1,0,0,0,1,1,0,0,-10,30,-14>
    }  
    object {
      stud2_dot_dat
      matrix <0,1,0,0,0,1,1,0,0,10,30,-14>
    }
    #end  
  }  
  #else
  box { <20,0,-14>, <-20,40,10> }
  #end  
#end         