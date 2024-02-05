#include<stdio.h>
void num(int x){
  if(x==0) return;
  num(x-1);
  printf("%d\n",x);
  return;
}
int main(){
  int n;
  scanf("%d",&n);
  num(n);
  return 0;
}