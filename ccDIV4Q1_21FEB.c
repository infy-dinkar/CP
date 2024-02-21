#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  if(x==8){
    printf("PERFECT");
  }
  else if(x<8){
    printf("LESS");
  }
  else{
    printf("MORE");
  }
  return 0;
}