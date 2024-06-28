#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,co,t=0,h=0;
  char str[20];
  printf("Who are you?\n");
  scanf("%s",str);
  printf("Hello, %s\n",str);

  printf("Tossing a coin...\n");

  for(i=0;i<3;i++){
    printf("Round %d:",i);
    co=rand()%10+1;
    if(co<5){
      printf(" Heads\n");
      h++;
    }
    else{
      printf(" Tails\n");
      t++;
    }
  }
  printf("Heads: %d, Tails: %d\n",h,t);
  if(h>t){
    printf("You won\n");
  }
  else{
    printf("You lost\n");
  }
    
    
    
  return 0;
}
