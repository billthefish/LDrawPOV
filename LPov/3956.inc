// 3956 - Bracket  2 x  2 -  2 x  2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3956_dot_dat)
#declare _3956_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      box { <-20,0,-20>,<20,8,20> }
      box { <-16,4,-16>,<16,8.01,16> }
      cylinder { <0,-0.01,0>, <0,4.01,0>, 6}
    }
    difference {
      box { <-20,-40,-28>, <20,8,-20> }
      box { <16,-36,-24>, <-16,-4,-19.99> }
      box { <16,-4.01,-24>, <12,0,-19.99> }
      box { <-16,-4.01,-24>, <-12,0,-19.99> }
      box { <-8,-4.01,-24>, <8,0,-19.99> }
      box { <-16,2,-28.01>, <-4,8.01,-19.99> }
      box { <16,2,-28.01>, <4,8.01,-19.99> }
      cylinder { <0,-20,-23>, <0,-20,-28.01>, 6 }
    }
    #if (L3Studs)
    object {
      stud_dot_dat
      matrix <1,0,0,0,0,1,0,-1,0,-10,-30,-28>
    }
    object {
      stud_dot_dat
      matrix <1,0,0,0,0,1,0,-1,0,10,-30,-28>
    }
    object {
      stud_dot_dat
      matrix <1,0,0,0,0,1,0,-1,0,-10,-10,-28>
    }
    object {
      stud_dot_dat
      matrix <1,0,0,0,0,1,0,-1,0,10,-10,-28>
    }
    object {
      stud4_dot_dat
      matrix <1,0,0,0,0,-1,0,1,0,0,-20,-24>
    }
    object {
      stud4_dot_dat
      matrix <1,0,0,0,-1,0,0,0,1,0,4,0>
    }
    #end   
  }
  #else
  box { <-20,-40,-28>, <20,8,20> }
  #end  
#end