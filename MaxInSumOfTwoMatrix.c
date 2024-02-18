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
  int n, s;
  scanf("%d %d", &n, &s);
  int brr[n][s];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < s; j++) {
      scanf("%d", &brr[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < s; j++) {
      printf("%d ", brr[i][j]);
    }
    printf("\n");
  }
  
int t=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<c;j++){
      int y=0;
      int max=arr[0][0]+brr[0][0];
     y= arr[i][j] +brr[i][j];
      if(y>max){
        max=arr[i][j]+brr[i][j];
      }
    t=max;
    }
  
  }
  printf("maximum sum =%d",t);
  return 0;
}