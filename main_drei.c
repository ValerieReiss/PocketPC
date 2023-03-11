
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#define TPL while (getchar() != '\n')
#define NL printf("\n");

int main (void)
{
 int y,i,j;
 double x;
 char k,f;
 int standardeingabe = 1;
 int var = 0;
   NL;
   NL;
   printf("\n-------------------------------------------------------------------------\n");
   printf("|                                                                       |\n");
   printf("|                                                                       |\n");
   printf("|                --  WELCOME TO YOUR PERSONAL POCKET PC --              |\n");
   printf("|                              Version 1.1                              |\n");
   printf("|                                                                       |\n");
   printf("|                                                                       |\n");
   printf("-------------------------------------------------------------------------\n");
   TPL;
   printf("\033[2J");
 do 
  {
   if (standardeingabe == 1)
    {
     printf("What do you want to do?");NL;
     printf("--------------------------------------------------------------------------------------------------");NL;
     printf("operator: +   -   *   /   m	q	 s	 %	 !	 #	0	");NL;
     printf("descript:add sub mul div mod	quad	sqr	perc	fac	more	quit	");NL;
     printf("--------------------------------------------------------------------------------------------------");NL;
     printf("Please choose your operation!");
     NL;NL;
     scanf("%c",&k);TPL;NL;
     if ( k == '0')
       {goto quitbefehl;}
     if ( k == '#')
       { x = untermenu (i);
         printf("You are back in Main-menue");NL;NL;
         goto backtomenu;}
     if ( k== '+' || k=='-' || k=='*' || k=='/' || k=='m' || k=='q' || k=='s' || k=='%' || k=='!' )
       { printf("Enter your first number: ");
        scanf("%d",&i);TPL;NL;
        if (i == 0)
         {goto backtomenu;}
       }
     else {printf ("Wrong entry");
           goto backtomenu;} 
    }
  
   switch (k)
    {
     case '+':
         printf("Enter your next number: ");
         scanf("%d",&j);TPL;NL;
         if (j != 0)
          { x = add (i,j);                                            
          printf("Result: %d",add (i,j));NL;}
         else {goto backtomenu;} 
          printf("Enter your next number: ");
          scanf("%d",&j);TPL;NL;
         if (j != 0)
          {y = add (x,j);
          printf("Result: %d",add (x,j));NL;}
         else {goto backtomenu;}
          NL;NL;NL;
          break;
     case '-':
         printf("Enter your next number: ");
         scanf("%d",&j);TPL;NL;
         if (j != 0)
           { x = sub (i,j);
           printf("Result: %d",sub (i,j));NL;}
         else {goto backtomenu;} 
         printf("Enter your next number: ");
         scanf("%d",&j);TPL;NL;
         if (j != 0)
         { y = sub (x,j);
         printf("Result: %d",sub (x,j));NL;}
         else {goto backtomenu;}
         NL;NL;NL;
         break;
     case '*':
         printf("Enter your next number: ");
         scanf("%d",&j);TPL;NL;
         if (j != 0)
           { x = multi (i,j);
           printf("Result:%.0lf",x);NL;}
         else {goto backtomenu;}
         printf("Enter your next number: ");
         scanf("%d",&j);TPL;NL;
         if (j != 0)
         { i = x; 
         x = multi (i,j);
         printf("Result: %.0lf",x);NL;}
         else {goto backtomenu;}
         NL;NL;NL;
         break; 
     case '/':
        printf("Enter your next number: ");
        scanf("%d",&j);TPL;NL;
        if (j != 0)
        { x = divi (i,j);
        printf("Result: %.4lf",x);NL;}
        else {goto backtomenu;}
        printf("Enter your next number: ");
        scanf("%d",&j);TPL;NL;
        if (j == 0)
        {goto backtomenu;}
        else
        { i = x;
        x = divi (i,j); 
        printf("Result: %.4lf",x);NL;}
        NL;NL;NL;
        break;
     case 'm':
        printf("Enter your next number: ");
        scanf("%d",&j);TPL;NL;
        if (j != 0 && j < i)
        { x = modulo (i,j);
        printf("Result: %d",modulo (i,j));NL;}
        if (j > i)
        {printf("Wrong entry");}
        else {goto backtomenu;}
        NL;NL;NL;
        break;
     case 'q':
        if (i != 0)
        {x = quadrat (i);
        printf("Result: %d",quadrat (i));NL;}
        else {goto backtomenu;}
        NL;NL;NL;
        break; 
     case 's':
        if (i < 0)
        {printf("Wrong entry");NL;break;}
        if (i == 0)
        {goto backtomenu;}
        else
        {x = wurzel (i);
        printf("Result: %.4lf",x);NL;}
        NL;NL;NL;
        break;
     case '%':
        if (i == 0){goto backtomenu;}
        if (i > 0) 
        {printf("Enter your next number: ");
         scanf("%d",&j);TPL;NL;
           if (j == 0){goto backtomenu;}
           if (j > 0)
            {x = prozent (i,j);
            printf("Result: %.4lf",x);NL;}
           else {goto backtomenu;}}
        else {printf("Wrong entry");NL;}
        NL;NL;NL;
        break;
     case '!':
        if (i == 0){goto backtomenu;}
        if (i > 0 && i < 17)
         {x = fakultat (i);
         printf("Result: %d", fakultat (i));NL;}
        if (i > 16)
         {printf("Wrong entry");}
        else {goto backtomenu;}
        NL;NL;NL;
        break; 
    // case '0':
    //    goto quitbefehl;
    //    NL;NL;
    //    break;
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
      quitbefehl:
      NL;
      printf("-------------------------------------------------------------------------\n");
      printf("|                                                                       |\n");
      printf("|               --  THANK YOU - YOUR PERSONAL POCKET PC --              |\n");
      printf("|                              Version 1.0                              |\n");
      printf("|                                                                       |\n");
      printf("-------------------------------------------------------------------------");
      NL;
      NL;
}

