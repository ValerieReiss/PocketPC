#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#define TPL while (getchar() != '\n')
#define NL printf("\n")

   int b,z,i;
   char t[24];
   char v[16], n[16];
   FILE *fp;
int adress (int x)
 {
  int zero;
  printf("---------------------------------------------------");NL;
  printf("adress-space");NL;




   printf("Read your adressbook[1] or enter a new name[0]");NL;
   scanf("%d",&z);
   TPL;
   if(z==0)
     { /*printf("How many names do you like to enter?");NL;
       scanf("%d",&b);
       for (i=b;i!=0;i--)*/
       do
        {
         printf("Please enter the first name");NL;
         scanf("%s",v);TPL;
         printf("Please enter the next name");NL;
         scanf("%s",n);TPL;
         printf("Please enter the phone-number");NL;
         scanf("%s",t);TPL;
         fp=fopen ("adressliste","a");
         if (fp==NULL)
           {fprintf (stderr,"ERROR");NL;exit(1);}
         fprintf(fp,"\n %s %s %s",v ,n ,t);NL;
         fclose(fp);
         printf("---------------------------------------------------");NL;
         printf("Do you want to enter another name?[Yes=1/No=0]");NL;
         scanf("%d",&b);TPL;NL;
        }while(b==1);
     }
   else if(z==1)
     {
      fp=fopen ("adressliste","r");
      if (fp==NULL)
        {fprintf (stderr,"ERROR");NL;
         exit(1);}
      while (fscanf(fp,"%s %s %s",v,n,t)!=EOF)
       {printf(" %s %s %s",v,n,t);NL;}
        fclose(fp);
        printf("---------------------------------------------------");NL;
       }
   else
     {
      printf("Wrong entry");NL;
     } 
  
  zero = x;
  return zero;
 }
