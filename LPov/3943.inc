// 3943 - Cone  4 x  4 x  2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#ifndef (_3943_dot_dat)
#declare _3943_dot_dat =
  #if (L3Quality)
  merge {

    difference {
      intersection {
        cone { <0,48,0>, 43.637, <0,0,0>, 20 }
        cylinder { <0,49,0>, <0,-1,0>, 40 }
      }   
      intersection {
        cylinder { <0,50,0>, <0,-2,0>, 37 }
        merge {
          cone { <0,48,0>, 40.364, <0,4,0>, 18.18 }
          object {
            axle_dot_dat
            scale y*6
            translate <0,-1,0>
          }  
        }  
      }  
      cylinder { <0,48.01,0>, <0,44,0>, 37 }
    }  
    #if (L3Studs)
    intersection {
      merge {
        object {
          stud4_dot_dat
          scale y*12
          translate <20,48,0>
        }  
        object {
          stud4_dot_dat
          scale y*12
          translate <0,48,20>
        }  
        object {
          stud4_dot_dat
          scale y*12
          translate <-20,48,0>
        }  
        object {
          stud4_dot_dat
          scale y*12
          translate <0,48,-20>
        }
      }    
      cone { <0,49,0>, 41.281, <0,4,0>, 18.18 }
    }    

    object {
      stud10_dot_dat
      translate <10,0,10>
    }
    object {
      stud10_dot_dat
      rotate y*180
      translate <-10,0,-10>
    }
    object {
      stud10_dot_dat
      rotate y*-90
      translate <-10,0,10>
    }
    object {
      stud10_dot_dat
      rotate y*90
      translate <10,0,-10>
    }
    object {
      stud4_dot_dat
      scale y*11
      translate <0,48,0>
    }
    #end
    object {
      axlehole_dot_dat
      scale y*14
      translate <0,4,0>
    }
      
  }  
  #else
  box { <-40,48,-40>, <40,0,40> }
  #end
#end
  