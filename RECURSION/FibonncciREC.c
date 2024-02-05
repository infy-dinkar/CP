#include<stdio.h>
int fabb(int x){
  if(x==0 || x==1||x==2) return 1;
  return fabb(x-1)+fabb(x-2) ;
    }
int main(){
  int n;
  scanf("%d",&n);
  printf("%d",fabb(n));
  return 0;
}