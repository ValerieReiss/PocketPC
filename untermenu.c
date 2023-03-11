#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#define TPL while (getchar() != '\n')
#define NL printf("\n")

int untermenu (int a)
 {
  int zero;
  int g;
  double f;
  int standardeingabe =1;
  char t;
  do
  {
   if (standardeingabe == 1)
   {
    printf("What do you want to do?");NL;
    printf("---------------------------------------------------");NL;
    printf("operator:	n	p	?	$	0");NL;
    printf("descript:	mes	pal	adr	bj	quit");NL;
    printf("---------------------------------------------------");NL;
    printf("Please choose your operation!");
    NL;NL;
    scanf("%c",&t);TPL;NL;
    if ( t == '0')
      {break;}
    if ( t== 'n' || t== 'p' || t== '?' || t== '$')
      { }
    else {printf("Wrong entry");
          goto backtomenu;}
   }
   switch (t)
   { 
    case 'n':
      NL;
      f = nachrichten (g);
      NL;
      break;
    case 'p':
      NL;
      f = palindrom (g);
      NL;
      break;
    case '?':
      NL;
      f = adress (g);
      NL;
      break;
    case '$':
      NL;
      f = spiel (g);
      NL;
      break;
    default:
      printf("Wrong entry");NL;
      NL;NL;NL;
      break;
    backtomenu:
       NL;NL;NL;
       break;
   }
  }
  while (1);
  zero = a;
  return zero;
 } 
