#include <stdio.h>
#include <math.h>
#include "header.h"

double wurzel (double a)
 {
  double xa = 0.0, erg = 0;
  int i;
  erg = a/2;
  for (i=0;i<=10;i++)
   {
    xa = erg;
    erg = (xa + a/xa)/2;
   }
/*  double erg;
  double f = 0.001;
  for (f = 0.001;f*f != (double)a;)
  { f += 0.001;}
  erg = f;*/
 // erg = sqrt((double) a);
  return erg;
 }  
