#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
  int d1 = 0,d2 = 0,total = 0;
  char name[100];
  srand(time(NULL));
  d1 = rand() % 6+1;
  d2 = rand() % 6+1;
  total = d1 + d2;
  /*printf("What is your name\n");
  scanf("%s",name);
  printf("hello, %s!\n",name);*/
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",d1);
  printf("Die 2: %d\n",d2);
  printf("Total value: %d\n",total);
  /*if(total > 7)
    {
      printf("You Won\n");
    } else
    {
      printf("You Lose\n");
    }
    printf("Helooooooooooooooooooooooooo\n");*/
  
  return 0;
}
