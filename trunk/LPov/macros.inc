// Brick, plate, and baseplate macros
// Author: Orion Pobursky

#include "primitives.inc"

#macro MakeBrick(BrickWidth, BrickDepth)

object {
#if (L3Quality)
  union {
  
    difference {
      box { <0,0,0>,<BrickWidth,24,BrickDepth> }
      box { <4,4,4>,<(BrickWidth - 4),24.01,(BrickDepth - 4)> }
    }
  
  #if (L3Studs)  
    #local tw=BrickWidth - 10;
    
    #while (tw > 0)
      #local td=BrickDepth - 10;
      #while (td > 0)
        object {
          stud_dot_dat
          translate <tw,0,td> 
        }
        #local td = td - 20;
      #end  
      #local tw = tw - 20;
    #end
    
    #if (BrickDepth >= 40)
      #if (BrickWidth >= 40)
        #local tw=BrickWidth - 20;
        #while (tw > 0)
          #local td=BrickDepth - 20;
          #while (td > 0)
            object {
              stud4_dot_dat
              scale y * 5
              rotate x * 180
              translate <tw,4,td> 
            }
            #local td = td - 20;
          #end  
        #local tw = tw - 20;
        #end
      #end
    #else
      #if (BrickWidth >= 20)
        #local tw=BrickWidth - 20;
        #while (tw > 0)
           object {
             stud3_dot_dat
             scale y * 5
             rotate x * 180
             translate <tw,4,10> 
           }
           #local tw = tw - 20;
        #end
      #end   
    #end 
    
  #end
    translate <-BrickWidth/2,0,-BrickDepth/2>      
  }
#else
  box {<-BrickWidth/2,0,-BrickDepth/2>, <BrickWidth/2,24,BrickDepth/2>}
#end    
      
}

#end

#macro MakePlate(BrickWidth, BrickDepth)

object {
#if (L3Quality)
  union {
  
    difference {
      box { <0,0,0>,<BrickWidth,8,BrickDepth> }
      box { <4,4,4>,<(BrickWidth - 4),8.01,(BrickDepth - 4)> }
    }
    
  #if (L3Studs)  
    #local tw=BrickWidth - 10;
    
    #while (tw > 0)
      #local td=BrickDepth - 10;
      #while (td > 0)
        object {
          stud_dot_dat
          translate <tw,0,td> 
        }
        #local td = td - 20;
      #end  
      #local tw = tw - 20;
    #end
    
    #if (BrickDepth >= 40)
      #if (BrickWidth >= 40)
        #local tw=BrickWidth - 20;
        #while (tw > 0)
          #local td=BrickDepth - 20;
          #while (td > 0)
            object {
              stud4_dot_dat
              rotate x * 180
              translate <tw,4,td> 
            }
            #local td = td - 20;
          #end  
        #local tw = tw - 20;
        #end
      #end
    #else
      #if (BrickWidth >= 20)
        #local tw=BrickWidth - 20;
        #while (tw > 0)
           object {
             stud3_dot_dat
             rotate x * 180
             translate <tw,4,10> 
           }
           #local tw = tw - 20;
        #end
      #end   
    #end 
    
  #end
    translate <-BrickWidth/2,0,-BrickDepth/2>      
  }
#else
  box {<-BrickWidth/2,0,-BrickDepth/2>, <BrickWidth/2,8,BrickDepth/2>}
#end    
}

#end

#macro MakeTile(BrickWidth, BrickDepth, Groove)

object {
#if (L3Quality)
  union {
  
    difference {
      box { <0,0,0>,<BrickWidth,8,BrickDepth> }
      box { <4,4,4>,<(BrickWidth - 4),8.01,(BrickDepth - 4)> }
      
      #if (Groove)
        difference {
          box { <-0.1,7,-0.1>,<BrickWidth + 0.1,8.01,BrickDepth + 0.1> }
          box { <1,6.99,1>,<BrickWidth - 1,8.02,BrickDepth - 1 > }
        }  
      #end
    }
    
  #if (L3Studs)  
    #if (BrickDepth >= 40)
      #if (BrickWidth >= 40)
        #local tw=BrickWidth - 20;
        #while (tw > 0)
          #local td=BrickDepth - 20;
          #while (td > 0)
            object {
              stud4_dot_dat
              rotate x * 180
              translate <tw,4,td> 
            }
            #local td = td - 20;
          #end  
        #local tw = tw - 20;
        #end
      #end
    #end
    
  #end
    translate <-BrickWidth/2,0,-BrickDepth/2>      
  }
#else
  box {<-BrickWidth/2,0,-BrickDepth/2>, <BrickWidth/2,8,BrickDepth/2>}
#end    
}

#end

#macro MakeTechnicBrick(BrickLength)

object {
#if (L3Quality)
  union {
    difference {
      merge {
        difference {
          box { <0,0,0>,<BrickLength,24,20> }
          box { <4,4,4>,<(BrickLength - 4),24.01,16> }
        }
  
        #local holepos = BrickLength - 20;
        #while (holepos > 0)
          cylinder { <holepos,10,3.99>, <holepos,10,16.01>, 8 }
          #if (L3Studs)
            object {
              stud3_dot_dat
              scale y*1.85
              rotate x * 180
              translate <holepos,16.6,10>
            }
          #end    
          #local holepos = holepos - 20;
        #end     
      }
    
      #local holepos = BrickLength - 20;
      #while (holepos > 0)
        union {
          cylinder { <holepos,10,1.99>, <holepos,10,18.01>, 6 }
          cylinder { <holepos,10,0.1>, <holepos,10,2>, 8 }
          cylinder { <holepos,10,18>, <holepos,10,20.01>, 8 }
        }
        #local holepos = holepos - 20;
      #end
    }
  
    
    #if (L3Studs)  
      #local studpos = BrickLength - 10;
    
      #while (studpos > 0)
        object {
          stud2_dot_dat
          translate <studpos,0,10> 
        }
        #local studpos = studpos - 20;
      #end  
    #end
           
    translate <-BrickLength/2,0,-10>      
  }

#else
  box {<-BrickLength/2,0,-10>, <BrickLength/2,24,10>}
#end    
}

#end