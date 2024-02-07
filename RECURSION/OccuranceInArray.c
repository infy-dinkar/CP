#include<stdio.h>
int main(){
    int n;
    printf("enter the length of array-");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        printf("enter %d array-",i+1);
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }
    printf("total number of same elements=%d",count);
    return 0;
}