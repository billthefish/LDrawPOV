//  - 
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _3675_dot_dat = 
  merge {
    object { stud_dot_dat }
    difference {
      box { <50,0,-50>, <-10,24,10> }
      plane { x, 0 rotate z*116.565 translate <10,0,0> }
      plane { z, 0 rotate x*-63.435 translate <0,0,-10> }
      difference {
        box { <46,4,-46>, <-6,24.01,6> }
        plane { x, 0 rotate z*113.962 translate <10,4,0> }
        plane { z, 0 rotate x*-66.038 translate <0,4,-10> }
      }  
    }
    difference {
      union {
        difference { 
          cylinder { <10,0,-30>,  <10,24,-30>, 8 }
          cylinder { <10,0.01,-30>, <10,24.01,-30>, 6}
        }
        difference { 
          cylinder { <30,0,-30>,  <30,24,-30>, 8 }
          cylinder { <30,0.01,-30>, <30,24.01,-30>, 6}
        }
        difference { 
          cylinder { <30,0,-10>,  <30,24,-10>, 8 }
          cylinder { <30,0.01,-10>, <30,24.01,-10>, 6}
        }
        difference { 
          cylinder { <10,0,-10>,  <10,24,-10>, 8 }
          cylinder { <10,0.01,-10>, <10,24.01,-10>, 6}
        }
      }  
      plane { x, 0 rotate z*113.962 translate <10,4,0> }
      plane { z, 0 rotate x*-66.038 translate <0,4,-10> }
    }
  }  