#include<stdio.h>
int fact(int x){
  if(x==0||x==1) return 1;
  return x*fact(x-1);
}
int main(){
  int n;
  printf("number whose factorial to find-");
  scanf("%d",&n);
  printf("fatorial=%d",fact(n));
  return 0;
}