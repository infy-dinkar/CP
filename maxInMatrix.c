#include <stdio.h>
int main() {
  int r, c;
  scanf("%d %d", &r, &c);
  int arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  int max=arr[0][0];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]>max){
        max=arr[i][j];
      }
    }
  }
  printf("maximum in array =%d",max);
  return 0;
}