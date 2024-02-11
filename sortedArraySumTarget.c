#include<stdio.h>
int main(){
  int arr[8]={1,2,3,4,5,8,9,10};
  int n;
  scanf("%d",&n);
  int i=0;
  int j=n-1;
  while(i<j){
    if(arr[i]+arr[j]==n){
      printf("%d %d",arr[i] ,arr[j]);
      break;
    }
    else if(arr[i]+arr[j]>n) j--;
    else if(arr[i]+arr[j]<n) j++;
    else{
      printf("not found");
    }
  }
  return 0;
  
}