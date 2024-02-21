#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);

  for(int i=0;i<t;i++){
      int s;
    scanf("%d",&s);
      int a[s];

    for(int j=0;j<s;j++) scanf("%d",&a[j]); 

    int ans = 0;

    for(int j=0;j<s;j++){
      if(a[j]<=4){
        ans = 0;
        break;
      } else {
        ans = 1;
      }
    }

    if(ans == 1) printf("YES\n");
    else printf("NO\n");

  }
  return 0;
}