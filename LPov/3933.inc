// 3933 - Wing  8 x  4 Left
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"

#declare _3933_dot_dat = 
  merge {
    object { stud_dot_dat translate <-30,0,70> }
    object { stud_dot_dat translate <-10,0,70> }
    object { stud_dot_dat translate <10,0,70> }
    object { stud_dot_dat translate <-30,0,50> }
    object { stud_dot_dat translate <-10,0,50> }
    object { stud_dot_dat translate <10,0,50> }
    object { stud_dot_dat translate <-30,0,30> }
    object { stud_dot_dat translate <-10,0,30> }
    object { stud_dot_dat translate <10,0,30> }
    object { stud_dot_dat translate <-30,0,10> }
    object { stud_dot_dat translate <-10,0,10> }
    object { stud_dot_dat translate <10,0,10> }
    object { stud_dot_dat translate <-30,0,-10> }
    object { stud_dot_dat translate <-10,0,-10> }
    object { stud_dot_dat translate <-30,0,-30> }
    object { stud_dot_dat translate <-10,0,-30> }
    object { stud_dot_dat translate <-30,0,-50> }
    object { stud_dot_dat translate <-30,0,-70> }
    object { stud4_dot_dat rotate x*180 translate <0,4,60> }
    object { stud4_dot_dat rotate x*180 translate <-20,4,60> }
    object { stud4_dot_dat rotate x*180 translate <0,4,40> }
    object { stud4_dot_dat rotate x*180 translate <-20,4,40> }
    object { stud4_dot_dat rotate x*180 translate <0,4,20> }
    object { stud4_dot_dat rotate x*180 translate <-20,4,20> }
    object { stud4_dot_dat rotate x*180 translate <0,4,0> }
    object { stud4_dot_dat rotate x*180 translate <-20,4,0> }
    object { stud4_dot_dat rotate x*180 translate <-20,4,-20> }
    object { stud4_dot_dat rotate x*180 translate <-20,4,-40> }
    object { stud3_dot_dat rotate x*180 translate <-30,4,-60> }
    difference {
      box { <38.71,0,80>, <-40,8,-80> }
      box { <20,-0.01,80.01>, <39,8.01,60> }
      plane { z, 0 rotate y*-66.803 translate <38.72,0,57> }
      difference {
        box { <16,8.01,76>, <-36,4,-76> }
        plane { z, 0 rotate y*-66.803 translate <16,0,13.33> }
      }  
      difference {
        box { <19,8.01,20.32>, <34.29,4,56> }
        plane { z, 0 rotate y*-66.803 translate <34.29,0,56> }
      }  
    }  
 }