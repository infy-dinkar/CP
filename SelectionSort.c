#include<stdio.h>
#include<limits.h>
int main(){
  int arr[7]={7,4,5,9,8,2,1};
  for(int i=0; i<7;i++){
    printf("%d  ",arr[i]);
  }
  for(int i=0;i<7;i++){
    int min= INT_MAX;
    int mindex=-1;
    for(int j=0;j<=7;i++){
      if(min>arr[j]){
        min=arr[j];
        mindex=j;
      }
    }
    int temp=arr[mindex];
    arr[mindex]=arr[i];
    arr[i]=temp;
  }
  printf("\n");
  for(int i=0;i<7;i++){
    printf("%d",arr[i]);
  }
  return 0;
}