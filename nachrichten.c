#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#define TPL while (getchar() != '\n')
#define NL printf("\n")
#define ANZ 1000
#define BLA 160

    char feld [ANZ];
    char *feldpointer;
  int z;
int nachrichten (int x)
 {
  int zero;
             int i = strlen(feldpointer);
  int test=1;
  char anhang [BLA];
  char *anhangpointer;
  anhangpointer=anhang;


  feldpointer=feld;

  do
  {
   printf("---------------------------------------------------");NL;
   printf("Write a new message:");NL;
   fgets(feld,sizeof(feld),stdin);
      //feld[strlen(feld)-1]='\0';

   printf("You have used already %d letters",i);NL;
   if (i>160)
    {
     printf("Your message is too long. Please try again");NL;NL;
    }
   else
   {
    printf("---------------------------------------------------");NL;
    printf("This is your message:");NL;NL;
    fputs(feld,stdout);NL;
    printf("You have %d free spaces",160-i);NL;break;
   }
  }
  while (test==1);

  do
  {
   printf("---------------------------------------------------");NL;
   printf("Do you want to send[0] or append some text[1]?");NL;

   scanf("%d",&z);TPL;NL;
   if(z==0)
    {
     printf("Your message was send!");NL;break;
    }
   else if(z==1)
    {
     printf("Write the text you want to append");NL;
     fgets(anhang,BLA-1,stdin);NL;
     strcat(feld,anhang);

     printf("You have already used %d letters",i-1);NL;
     if (i>160)
      {
       printf("Your message is too long. Please try again");NL;NL;break;
      }
     else
      {
       printf("---------------------------------------------------");NL;
       printf("This is your message:");NL;NL;
       fputs(feld,stdout);NL;
       printf("You have %d free spaces",161-i);NL;
      }
   }
  else
   {
    printf("Wrong entry");NL;break;
   }
  }while(test==1);
 
  zero = x;
  return zero;
 }

