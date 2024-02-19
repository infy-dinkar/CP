#include<stdio.h>
int main(){
  int arr[3][4]={{0,1,1,1},{1,1,1,1},{0,0,1,1}};
  int row=0;
  int j=0;
  for(int i=0;i<3;i++){
      for( ;j>=0;j--){
          if(arr[i][j]==0){
             break;
          }
          row = i;

      }

  }
  printf("%d",row);
  return 0;
// }