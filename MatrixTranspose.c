#include<stdio.h>
int main(){
  int n;
   scanf("%d %d",&n,&n);
  int a[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n");
  for(int i=0 ;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
  }
  for(int i=0 ;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  return 0;
  
}