// 4596 - Space Wing 4 x 2
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "macros.inc"

#ifndef (_4596_dot_dat)
#declare _4596_dot_dat =
  #if (L3Quality)
  merge {
  
    object {
      MakePlate(40,20)
    }
    
    difference {
      box { <20,0,-62>, <-20,8,-10> }
      merge {
        
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-6,0,0,0,11.01,0,-0.75,0,6,-3.25,-0.01,-16>}
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-6,0,0,0,11.01,0,0.75,0,6,3.25,-0.01,-16>}
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-6,0,0,0,11.01,0,-0.75,0,6,-1.75,-0.01,-22>}
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-6,0,0,0,11.01,0,0.75,0,6,1.75,-0.01,-22>}
        box { <-4,-0.01,-10>, <4,8.01,-14> }
        box { <-1,-0.01,-28>, <1,8.01,-24> }

        difference {
          box { <-9.25,-0.01,-16>, <9.25,8.01,-22> }
          union {
            plane { -x, 0 rotate y*14.0362 translate <9.25,0,-16> }
            plane { x, 0 rotate y*-14.0362 translate <-9.25,0,-16>}
          }  
        }

        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-4,0,0,0,11.01,0,-0.5,0,4,-2.75,-0.01,-36>}
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-4,0,0,0,11.01,0,0.5,0,4,2.75,-0.01,-36>}
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-4,0,0,0,11.01,0,-0.5,0,4,-1.75,-0.01,-44>}
        cylinder { <0,0,0>, <0,1,0>, 1 matrix <-4,0,0,0,11.01,0,0.5,0,4,1.75,-0.01,-44>}
        box { <-3.25,-0.01,-32>, <3.25,8.01,-34> }
        box { <-1,-0.01,-48>, <1,8.01,-44> }
        
        difference {
          box { <-6.75,-0.01,-36>, <6.75,8.01,-44> }
          union {
            plane { -x, 0 rotate y*7.125 translate <6.75,0,-36> }
            plane { x, 0 rotate y*-7.125 translate <-6.75,0,-36>}
          }  
        }

        difference {
          union {
            box { <-16,-0.01,-10>, <16,3,-28> }
            box { <-16,5,-10>, <16,8.01,-28> }
            box { <-10.5,-0.01,-32>, <10.5,3,-48> }
            box { <-10.5,5,-32>, <10.5,8.01,-48> }
            box { <-5.5,-0.01,-52>, <5.5,3,-58> }
            box { <-5.5,5,-52>, <5.5,8.01,-58> }
          }
          plane { -x, 0 rotate y*14.0362 translate <16,0,-10> }
          plane { x, 0 rotate y*-14.0362 translate <-16,0,-10>}
        }
        
        box { <4,-0.01,-58>, <-4,3,-62.01> }
        box { <4,5,-58>, <-4,8.01,-62.01> }

        cylinder { <0,-0.01,-62>, <0,8.01,-62>, 4 }
        
        plane { -x, 0 rotate y*14.0362 translate <20,0,-10> }
        plane { x, 0 rotate y*-14.0362 translate <-20,0,-10>}
           
      }
    }
    
    difference {
      cylinder { <0,2,-62>, <0,2,-66>, 8 }
      cylinder { <0,2,-61.99>, <0,2,-66.01>, 4 }
    }
    
    #if (L3Studs)
    object {
      stud4_dot_dat
      matrix <1,0,0,0,0,1,0,1,0,0,2,-66>
    }
    #end    
    
  }
  #else
  box { <20,0,10>, <-20,8,-70> }
  #end
#end           