#include<stdio.h>
#include<string.h>
int main(){
  char str[1000];
  puts("enter the string-");
  scanf("%[^\n]s",str);
  int count=0;
  int k;
  while(str[k]!='\0'){
    count++;
    k++;
  }
  for(int i=0,j=count-1;i<=j;i++,j--){
      char temp=str[i];
      str[i]=str[j];
      str[j]=temp;
  }
  printf("size is=%d",count);
  puts("the reverse string is=");
 printf("%s",str[1000]);
  return 0;
}