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