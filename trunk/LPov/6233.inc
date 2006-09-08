// 6233 - Cone  3 x  3 x  2
// Author: Orion Pobursky
// DAT Author: Steve BLiss

#include "primitives.inc"

#ifndef (_6233_dot_dat)
#declare _6233_dot_dat =
  #if (L3Quality)
/*  merge {
  #if (L3Studs)
    object { stud2_dot_dat }
    object { stud4_dot_dat translate <0,48,0> }
  #end     */
    difference {
      intersection {
        cone {
          <0,80,0>, 40, <0,0,0>, 20
        }
        cylinder {
          <0,-0.1,0>, <0,48.1,0>, 30
        }  
      }
      intersection {
        cone {
          <0,78.41,0>, 34.398, <0,4,0>, 17.199
        }
        cylinder {
          <0,-0.1,0>, <0,48.1,0>, 26
        }  
      }  /*
      cylinder {
        <0,-0.1,0>, <0,4.1,0>, 4
      }
      box {
        <-16,44,-16>, <16,48.1,16>
      }    */
      plane {
        -y, -48
      }
    } /*
    difference {
      cylinder {
        <0,3.9,0>, <0,44,0>, 8
      }
      cylinder {
        <0,3.8,0>, <0,44.1,0>, 6
      }
    }    
    object {
      axlehole_dot_dat
      scale <0,8,0>
      translate <0,4,0>
    }   
  }   */
  #else
  box { <-20,0,-20>, <20,48,20> }
  #end
#end            