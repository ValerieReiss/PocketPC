#include <stdio.h>
#include "header.h"

int fakultat (int a)
 {
  int erg = 1.0;
  while (a != 0)
    {
     erg *= a;
     a--;
    }
  return erg;
 }  
