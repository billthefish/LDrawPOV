// P Folder
// Author: Orion Pobursky

//L3P Compatibility Declares
#ifndef (L3Quality)
#declare L3Quality = 2;
#end

#ifndef (L3Studs)
#declare L3Studs = 1;
#end

// Studs
#ifndef (stud_dot_dat)
#declare stud_dot_dat = 
  cylinder { <0,0,0>,  <0,-4,0> , 6 }
#end

#ifndef (stud2_dot_dat)
#declare stud2_dot_dat =
  difference { 
    cylinder {
      <0,0,0>,  <0,-4,0> , 6
    }
    cylinder {
      <0,0.01,0>, <0, -4.01, 0>, 4
    }
  }
#end
  
#ifndef (stud2a_dot_dat)
#declare stud2a_dot_dat = stud2_dot_dat
#end
      
#ifndef (stud3_dot_dat)
#declare stud3_dot_dat = 
  cylinder {
    <0,0,0>,  <0,-4,0> , 4
  }
#end
       
#ifndef (stud3a_dot_dat)
#declare stud3a_dot_dat = stud3_dot_dat
#end

#ifndef (stud4_dot_dat)
#declare stud4_dot_dat =
  difference { 
    cylinder {
      <0,0,0>,  <0,-4,0>, 8
    }
    cylinder {
      <0,0.01,0>, <0, -4.01, 0>, 6
    }
  }
#end
  
#ifndef (stud4a_dot_dat)
#declare stud4a_dot_dat = stud4_dot_dat
#end

#ifndef (stud6_dot_dat)
#declare stud6_dot_dat =
  difference {
    intersection { 
      cylinder {
        <-10,0.01,-10>, <-10,-4.01,-10>, 20
      }
      cylinder {
        <0,0,0>,  <0,-4,0>, 6
      }
    }  
    cylinder {
      <0,0.01,0>, <0, -4.01, 0>, 4
    }
  }
#end
  
#ifndef (stud6a_dot_dat)
#declare stud6a_dot_dat = stud6_dot_dat
#end

#ifndef (stud7_dot_dat)
#declare stud7_dot_dat =
  difference { 
    cylinder {
      <0,0,0>,  <0,-4,0>, 12
    }
    cylinder {
      <0,0.01,0>, <0, -4.01, 0>, 9
    }
  }
#end
  
#ifndef (stud8_dot_dat)
#declare stud8_dot_dat =
  difference { 
    cylinder {
      <0,0,0>,  <0,-4,0>, 16
    }
    cylinder {
      <0,0.01,0>, <0, -4.01, 0>, 14
    }
  }
#end
  
#ifndef (stud10_dot_dat)
#declare stud10_dot_dat =
  intersection { 
    cylinder {
      <-10,0.01,-10>, <-10,-4.01,-10>, 20
    }
    cylinder {
      <0,0,0>,  <0,-4,0>, 6
    }
  }  
#end

//Axleholes
#ifndef (axle_dot_dat)
#declare axle_dot_dat = 
  intersection {
    cylinder {<0,0,0>, <0,1,0>, 6}
     union {
       box {<-7,-1,-2>, <7,2,2>}
       box {<-2,-1,-7>, <2,2,7>}
    }
}
#end

#ifndef (axlehole_dot_dat)
#declare axlehole_dot_dat = 
  union {
    cylinder { <0,0,0>, <0,1,0>, 6 open }
    difference {
      cylinder { <0,0,0>, <0,1,0>, 6 }
      intersection { 
        plane { -x, 2 } 
        plane { x, 2 } 
      }
      intersection { 
        plane { -z, 2 } 
        plane { z, 2 } 
      }
    }
  }
#end

#ifndef (axlehol4_dot_dat)
#declare axlehol4_dot_dat = 
  union {
    cylinder { <0,0,0>, <0,1,0>, 6 open 
      clipped_by { plane { z, sqrt(32) } } 
    }
    difference {
      cylinder { <0,0,0>, <0,1,0>, 6 }
      intersection { 
        plane { -x, 2 } 
        plane { x, 2 } 
      }
      intersection { 
        plane { -z, 2 } 
        plane { z, 2 } 
      }
    }
  }
#end 

#ifndef (axlehol5_dot_dat)
#declare axlehol5_dot_dat = 
  union {
    cylinder {
      <0,0,0>, <0,1,0>, 6 open
      clipped_by { plane { z, sqrt(32) } }
      clipped_by { plane { -z, sqrt(32) } }
    }
    difference {
      cylinder { <0,0,0>, <0,1,0>, 6 }
      intersection { 
        plane { -x, 2 } 
        plane { x, 2 } 
      }
      intersection { 
        plane { -z, 2 } 
        plane { z, 2 } 
      }
    }
  }
#end

#ifndef (axlehol6_dot_dat)
#declare axlehol6_dot_dat = 
  difference { 
    cylinder { <0,0,0>, <0,1,0>, 6 } 
    plane { x, 2 } 
    plane { z, 2 } 
  }
#end

#ifndef (axlehol7_dot_dat)
#declare axlehol7_dot_dat = 
  cylinder {
    <0,0,0>, <0,1,0>, 6 open
    clipped_by { 
      union {
	plane { x, -sqrt(32) }
	plane { -x, -sqrt(32) }
	plane { z, -sqrt(32) }
	plane { -z, -sqrt(32) }
      } 
    }
  }
#end

#declare axlehol8_dot_dat =  
  difference {
    cylinder {<0,0,0>,<0,1,0>,6 open}
    merge {
      box {<-2,-1,2>,<-6,2,6>}
      box {<2,-1,2>,<6,2,6>}
      box {<-2,-1,-2>,<-6,2,-6>}
      box {<2,-1,-2>,<6,2,-6>}
    }
  }    
#end

/*
#declare axleho11_dot_dat = merge {
                              intersection {
                                cylinder {<0,-1,0>,<0,2,0>,6}
                                union {
                                  cylinder {<-5.602,0,-5.602>,<-5.602,1,-5.602>,3.602}
                                  cylinder {<5.602,0,5.602>,<5.602,1,5.602>,3.602}
                                }  
                              }
                              //cylinder {<0,0,0>,<0,1,0>,6 open}
                            }  
  
*/

//Connects
#ifdef (connect_dot_dat)
#declare connect_dot_dat = 
  difference {
    merge {
      cylinder {<0,-18,0>,<0,-20,0>,6.5}
      cylinder {<0,-18,0>,<0,-2,0>,6}
      cylinder {<0,0,0>,<0,-2,0>,8}
    }  
    box {<-7,-12,-1>,<7,-21,1>}
    cylinder {<0,1,0>,<0,-21,0>,4}
  }
#end
                      
#ifdef (connect2_dot_dat)
#declare connect2_dot_dat = 
  difference {
    merge {
      cylinder {<0,-18,0>,<0,-20,0>,6.5}
      cylinder {<0,-18,0>,<0,0,0>,6}
    }  
    box {<-7,-12,-1>,<7,-21,1>}
    cylinder {<0,1,0>,<0,-21,0>,4}
  }
#end
                      
#ifdef (connect3_dot_dat)
#declare connect3_dot_dat = 
  difference {
    merge {
      cylinder {<0,-8,0>,<0,-10,0>,6.5}
      cylinder {<0,-8,0>,<0,-2,0>,6}
      cylinder {<0,0,0>,<0,-2,0>,8}
    }  
    box {<-7,-4,-1>,<7,-11,1>}
    cylinder {<0,1,0>,<0,-11,0>,4}
  }
#end
                      
#ifdef (connect4_dot_dat)
#declare connect4_dot_dat = 
  difference {
    merge {
      cylinder {<0,-8,0>,<0,-10,0>,6.5}
      cylinder {<0,-8,0>,<0,0,0>,6}
    }  
    box {<-7,-4,-1>,<7,-11,1>}
    cylinder {<0,1,0>,<0,-11,0>,4}
  }
#end

#ifdef (connect5_dot_dat)
#declare connect5_dot_dat = 
  difference {
    merge {
      cylinder {<0,-18,0>,<0,-20,0>,6.5}
      cylinder {<0,-18,0>,<0,-2,0>,6}
      cylinder {<0,0,0>,<0,-2,0>,8}
    }  
    box {<-7,-12,-1>,<7,-21,1>}
    cylinder {<0,1,0>,<0,-21,0>,4}
    box {<-1,1,9>,<1,-10,-9>}
  }
#end

