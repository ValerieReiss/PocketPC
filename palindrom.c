#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#define TPL while (getchar() != '\n')
#define NL printf("\n")

int palindrom (int x)
 {
  int zero;
  
  int i=0;
  int k=0;
  int anz=0;
  char b[16];

  printf("---------------------------------------------------");NL;
  printf("your personal palindrom-tester");NL;
  printf("write down your word [15]");NL;
  scanf("%15s",b);

  for (i=0;i<16;i++)
  {
    if(b[i]!='\0')
     {
      anz++;
     }
    else break;
  }
  k=anz-1;
  for(i=0;i<anz;i++)
  {
   if(b[i]==b[k])
    {
     k--;
    }
   else
    {
     printf("sorry, this is no palindrom");NL;
     i=anz+1;
    }
  }
  if (i==anz)
    {
     printf("this is a palindrom");NL;
    } 

  zero = x;
  return zero;
 }
