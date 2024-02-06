#include<stdio.h>
int func(int a,int b,int m){
  if(b==0) return 1;
  if(b==1) return a%m;
  if(b%2==1){
    int temp=func(a,b/2,m);
    return (temp*temp*(a%m))%m;
  }else{
    int temp=func(a,b/2,m);
    return (temp*temp)%m; 
  }
}
int main(){
  int ans=func(10,7,1);
  printf("%d",ans);

  
}