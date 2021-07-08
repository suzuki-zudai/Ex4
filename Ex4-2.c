#include <stdio.h>
#include <stdlib.h>
int main(){
  int kaisu=2;
  int d[kaisu];
  int total;
  int  i;
  for(i=0;i<kaisu;i++){
   d[i]=rand()%6+1;
   }

  printf("Rolling the dice.../n");
  for(i=0;i<kaisu;i++){
  printf("Die: %d: %d",i+1,d[i]);
  total+=d[1];
  }
  printf("Total value: %d",total);
  if(total>=7){
    printf("You win.\n");
  }
  else printf("you win.\n");
return 0;
  }