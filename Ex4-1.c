#include <stdio.h>
#include <stdlib.h>
int main(){
  int kaisu=2;
  int d[kaisu];
  int total;
  int  i;
  char c;
  for(i=0;i<kaisu;i++){
   d[i]=rand()%6+1;
   }
  printf("What is your name?\n");
  scanf("%s",c);
  printf("Helo,%s!\n",c);
  printf("Rolling the dice...\n");
  for(i=0;i<kaisu;i++){
  printf("Die: %d: %d\n",i+1,d[i]);
  total+=d[1];
  }
  printf("Total value: %d\n",total);
  return 0;
  }