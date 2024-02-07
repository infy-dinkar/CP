#include <stdio.h>
#include<string.h>
int main(){
    char str[1000],temp;
    gets(str)
   for(int i=0,j=999;i<=j;i++,j--)
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
}
puts(str);
    return 0;
}