#include<stdio.h>
int min( int a,int b){
if(a>b)return b;
  else return a;
}
int hcf( int x , int y){
  int gcd;
  for(int i =min (x,y);i>=1;i--)
    if (x%i==0&&y%i==0){
      gcd=i;
      break;
    }
  return gcd;
}
int main(){
  int c ,d;
  printf("enter the value of a and b");
  scanf("%d  %d",&c, &d );
 int x= hcf(c,d);
  printf("HCF=%d",x);
  return 0;



}
