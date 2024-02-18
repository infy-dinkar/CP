#include<stdio.h>
int main(){
  int arr[3][4]={{1,0,1,1},{1,1,1,1},{1,0,0,1}};
  int max_sum=0;
  int row=0;
  for(int i=0;i<3;i++){
    int row_sum=0;
    for(int j=0;j<4;j++){
      row_sum=row_sum+arr[i][j];
    }
    if(row_sum > max_sum){
      max_sum=row_sum;
      row++;
    }
  }
  printf("maximum number of 1 is in %d row",row);
  return 0;
}
