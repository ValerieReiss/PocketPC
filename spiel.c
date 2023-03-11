#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
#include <string.h>
#define TPL while (getchar() != '\n')
#define NL printf("\n")

int karten[] = {1,2,3,4,5,6,7,8,9,10,10,10,10,11};
int anzahl = sizeof(karten)/sizeof(int);
int randomzahl;
int eingabe;

struct spieler {
     int runde;
     int punkte;};
struct spieler computer = {0,0};
struct spieler spieler1 = {0,0};

void karte_ziehen(struct spieler *pointer)
 {
  srand(time(NULL));
  randomzahl = rand()%(anzahl-1)+1;
  pointer->runde++;
  pointer->punkte += karten[randomzahl];
 }
 
void computer_autorun(void)
    {
     while(computer.punkte < spieler1.punkte)
       {
        printf("pc has %d points and plays. Go on [Enter]",computer.punkte);
        TPL;
        karte_ziehen(&computer);
        if (computer.punkte > 21)
         {printf("pc has %d points -> more than 21 points",computer.punkte);NL;
          printf("Gratulation! You are the winner!");NL;
          printf("---------------------------------------------------");NL;
          printf("-x-----x---x---xx--x---xx--x---xxx---xxx-----------");NL;
          printf("--x-x-x----x---x-x-x---x-x-x---xx----xxx-----------");NL;
          printf("---x-x-----x---x--xx---x--xx---xxx---x--x----------");NL;
          printf("---------------------------------------------------");NL;
          TPL;NL;break;}
        if (computer.punkte > spieler1.punkte && computer.punkte < 21)
         {printf("pc has %d points.",computer.punkte);NL;
          printf("sorry, you have lost.");NL;
          printf("---------------------------------------------------");NL;
          TPL;NL;break;}
       }
    }

int spiel (int x)
 {
  int zero;
  printf("---------------------------------------------------");NL;
  karte_ziehen(&computer);NL;
  printf("Blackjack Light Version");NL;NL;
  printf("pc has %d points.",computer.punkte);NL;
  printf("you have to get more but not over 21 points.");NL;
    do 
      {
       printf("you have %d points. want to draw a card? [j] or [n]",spieler1.punkte);
       eingabe = getchar();
       TPL;
       if (eingabe == 106)
         {karte_ziehen(&spieler1);}
       if (spieler1.punkte > 21)
         {printf("sorry, you have lost.");NL;
          printf("you have %d points -> more than 21.",spieler1.punkte);NL;NL;
          return 0;}
       if (eingabe != 106 && spieler1.punkte <= computer.punkte)
         {printf("sorry, you have lost.");NL;
          printf("you have %d points -> not better than pc.",spieler1.punkte);NL;NL;
          return 0;}
       if (eingabe != 106 || spieler1.punkte == 21 || spieler1.punkte == 20)
         {printf("you have %d points. this will be hard to beat..",spieler1.punkte);NL;
          printf("but your pc will try it.press [enter]");NL;
          TPL; 
          printf("---------------------------------------------------");NL;
          computer_autorun();NL; 
          return 0;}
      } while (1);
   
  zero = x;
  return zero;
 }
