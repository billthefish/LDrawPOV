// 758 - ~Hose Flexible 12L Segment
// Author: Orion Pobursky
// DAT Author: Steve Bliss

#include "primitives.inc"

#ifndef (_758_dot_dat)
#declare _758_dot_dat =
  #if (L3Quality)
  merge {
    sphere { <0,0,0>, 4 }
    cylinder { <0,0,0>, <0,2.272,0>, 4}
    cylinder { <0,2.271,0>, <0,5.161,0>, 8 }
  }
  #else
  box { <8,0,8>, <-8,5.161,-8> }
  #end
#end    
