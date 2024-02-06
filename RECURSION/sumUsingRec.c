#include<stdio.h>
int sum(int x){
    if(x<=9) return x;
   return (x%10)+sum(x/10);
}
int main(){
    printf("%d",sum(23));
}