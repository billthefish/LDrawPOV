// 4746 - Tail  4 x  2 x  2 with Rocket
// Author: Orion Pobursky
// DAT Author: James Jessiman

#include "primitives.inc"
//#include "lugnetcolors.inc"

#declare _4746_dot_dat =
/*  merge {
    //Stud on tip of cone
    object { stud2_dot_dat rotate x*90 translate <0,20,-60> }
    //Studs on sides
    object { stud2_dot_dat rotate z*90 translate <11,20,10> }
    object { stud2_dot_dat rotate z*-90 translate <-11,20,10> }
    //Studs on top
    object { stud2_dot_dat translate <10,0,10> }
    object { stud2_dot_dat translate <-10,0,10> }
    object { stud2_dot_dat translate <10,0,-10> }
    object { stud2_dot_dat translate <-10,0,-10> }
    difference {
      cylinder { <0,20,36>, <0,20,40>, 20 }
      box { <16,4,35>, <-16,36,40.01> }
    }   
    difference {
      // Main cone
      merge {
        cone { <0,20,36>, 20, <0,20,-60>, 6 }
        box { <-20,0,20>, <20,4,-20> }
        //Vertical slope
        difference {
          box { <2,44,20>, <-2,4,-60> }
          plane { y, 0 rotate x*45 translate <0,4,-20> } 
        }
      }       
      //Back cuts
      difference { 
        cone { <0,20,-5.14>, 10, <0,20,36.001>, 16 } */
        difference {
          box { <14,10,37>, <-14,30,24> }
          plane { x,0 rotate y*190.062  translate <14,0,36> }
          plane { x,0 rotate y*-10.062  translate <-14,0,36> }

//          plane { x,0 rotate z*125.272 rotate y*10.062 translate <14,12.87,36> }
          plane { x,0 rotate z*215.272 rotate y*10.062 translate <14,27.13,36> }

//          plane { x,0 rotate z*35.272 rotate y*-10.062 translate <-14,12.87,36> }
          plane { x,0 rotate z*305.272 rotate y*-10.062 translate <-14,27.13,36> }
      } /*
      //Side cuts
      box { <11,6,20>, <20,34,-36> }
      box { <-11,6,20>, <-20,34,-36> }
      cylinder { <8,15.5,-1.5>, <12,15.5,-1.5>, 1.5 } 
      cylinder { <-8,15.5,-1.5>, <-12,15.5,-1.5>, 1.5 } 
      cylinder { <8,24.5,-1.5>, <12,24.5,-1.5>, 1.5 } 
      cylinder { <-8,24.5,-1.5>, <-12,24.5,-1.5>, 1.5 }
      box { <12,23,-1.5>, <8,26,-45> } 
      box { <-12,23,-1.5>, <-8,26,-45> } 
      box { <12,17,-1.5>, <8,14,-45> } 
      box { <-12,17,-1.5>, <-8,14,-45> } 
      cylinder { <15,5.5,30.5>, <11,5.5,30.5>, 1.5 }
      box { <11,7,30.5>, <15,4,20> }
      cylinder { <15,34.5,30.5>, <11,34.5,30.5>, 1.5 }
      box { <11,36,30.5>, <15,33,20> }
      cylinder { <-15,5.5,30.5>, <-11,5.5,30.5>, 1.5 }
      box { <-11,7,30.5>, <-15,4,20> }
      cylinder { <-15,34.5,30.5>, <-11,34.5,30.5>, 1.5 }
      box { <-11,36,30.5>, <-15,33,20> } 
      difference {
        merge {
          box { <12,14,19>, <20,17,30.5> }
          cylinder { <12,15.5,30.5>, <20,15.5,30.5>, 1.5 }
          box { <12,23,19>, <20,26,30.5> }
          cylinder { <12,24.5,30.5>, <20,24.5,30.5>, 1.5 }
        }
        plane { x,0 rotate y*8.29 translate <14,14,20> }
      }    
      difference {
        merge {
          box { <-12,14,19>, <-20,17,30.5> }
          cylinder { <-12,15.5,30.5>, <-20,15.5,30.5>, 1.5 }
          box { <-12,23,19>, <-20,26,30.5> }
          cylinder { <-12,24.5,30.5>, <-20,24.5,30.5>, 1.5 }
        }
        plane { x,0 rotate -y*98.29 translate <-14,14,20> }
      }    
    }
    //Top square
    merge {
      //Bottom      
      difference {
        box { <-4,48,20>, <4,44,-60> }
        plane { x, 0 rotate -y*14.036 translate <-2,48,-60> } 
        plane { x, 0 rotate y*194.036 translate <2,48,-60> } 
      }
      //Bottom tabs right
      difference {
        box { <-4,48,-48>, <-10,44,-32> }
        plane { x, 0 rotate y*-45 translate <-4,48,-48> }
        plane { x, 0 rotate y*45 translate <-4,44,-32> }
      }  
      difference {
        box { <-4,48,-28>, <-10,44,-12> }
        plane { x, 0 rotate y*-45 translate <-4,48,-28> }
        plane { x, 0 rotate y*45 translate <-4,44,-12> }
      }  
      difference {
        box { <-4,48,-8>, <-10,44,8> }
        plane { x, 0 rotate y*-45 translate <-4,48,-8> }
        plane { x, 0 rotate y*45 translate <-4,44,8> }
      }  
      difference {
        box { <-4,48,12>, <-10,44,20> }
        plane { x, 0 rotate y*-45 translate <-4,48,12> }
      }  
      //Bottom tabs left
      difference {
        box { <4,48,-48>, <10,44,-32> }
        plane { x, 0 rotate y*-135 translate <4,48,-48> }
        plane { x, 0 rotate y*135 translate <4,44,-32> }
      }  
      difference {
        box { <4,48,-28>, <10,44,-12> }
        plane { x, 0 rotate y*-135 translate <4,48,-28> }
        plane { x, 0 rotate y*135 translate <4,44,-12> }
      }  
      difference {
        box { <4,48,-8>, <10,44,8> }
        plane { x, 0 rotate y*-135 translate <4,48,-8> }
        plane { x, 0 rotate y*135 translate <4,44,8> }
      }  
      difference {
        box { <4,48,12>, <10,44,20> }
        plane { x, 0 rotate y*-135 translate <4,48,12> }
      }  
    }  
  } */    