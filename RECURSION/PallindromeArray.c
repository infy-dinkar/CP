#include <stdio.h>

int main(void) {

  int a ;
  printf("Enter A: \n");
  scanf("%d",&a);
  int b[a];
  printf("Enter The Array : \n");
  for (int i = 0 ; i < a ; i++){
    scanf("%d",&b[i]);
  }
  int c = sizeof(b)/sizeof(b[0]);
  printf("No of element = %d\n",c);
  int flag = 1;
  for (int j = 0 , k = c -1; j<=k ; j++,k--){
    if (b[j] != b[k]){
      flag = 0;
      break;
    }
  }
  if (flag == 1)
  {
    printf("Palindrome ... ");
  }
  else {
    printf("Not Palindrome ... ");
  }

  return 0;

}
