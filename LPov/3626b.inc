// 3626b - Minifig Head with Hollow Stud
// Author: Orion Pobursky
// DAT Author: Tore Eriksson

#include "primitives.inc"

#ifndef (_3626bholepiece)
#declare _3626bholepiece =
  difference {
    cylinder {
      <0,-0.1,0>, <0,4.1,0>, 4
    }
    plane {
      -x, 1
    }

    plane {
      z, 0
      rotate y*-30.1414
      translate <-1,0,0.58>
    } 
  }
#end

#ifndef (_3626bholes)
#declare _3626bholes =
  union {
    object {
      _3626bholepiece
    }
    object {
      _3626bholepiece
      rotate y*120
    }
    object {
      _3626bholepiece
      rotate y*240
    }
  }  
#end

#ifndef (_3626b_dot_dat)
#declare _3626b_dot_dat =
  #if (L3Quality)
  merge {
    difference {
      merge {
        cylinder {
          <0,4,0>, <0,17,0>, 13
        }
        cylinder {
          <0,0,0>, <0,24,0>, 8
        }
        torus {
          1, 0.625
          matrix <0, 0, 8, 0, -6.4, 0, 8, 0, 0,0,4,0>
        }  
        torus {
          1, 0.625
          matrix <0, 0, 8, 0, -6.4, 0, 8, 0, 0,0,17,0>
        }
      }    
      cylinder {
        <0,4,0>, <0,24.1,0>, 6
      }
      object {
        _3626bholes
      }
    }
    #if (L3Studs)
      object { stud2_dot_dat }
    #end
  }
  #end
#end  
