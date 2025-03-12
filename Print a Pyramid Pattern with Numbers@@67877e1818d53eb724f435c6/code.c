#include<stdio.h>
int main(){

    int n,num;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        for(int g=n-1;g>i;g--){
            printf(" ");
        }
    }
    return 0;
}
