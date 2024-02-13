#include<stdio.h>
int main(){
  int arr[5]={ 5,4,3,2,1};
  for(int i=0;i<5;i++){
    printf("%d  ",arr[i]);
  }
  for(int i=1;i<=4;i++){
    int j=i;
    while(arr[j]< arr[j-1]){
      int temp=arr[j];
      arr[j]=arr[j-1];
      arr[j-1]=temp;
      j--;
    }
  }
  printf("\n");
  for( int i=0;i<=4;i++){
    printf("%d  ",arr[i]);
  }
  return 0;
    
  }
  
