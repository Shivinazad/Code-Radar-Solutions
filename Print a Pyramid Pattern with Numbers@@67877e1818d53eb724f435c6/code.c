#include<stdio.h>
int main(){

    int n,num;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int g=n-1;g>=i;g--){
            printf(" ");
        }

        fot(int j=1;j<=i;j++){
            printf("%d ",j);
        }
    }
    return 0;
}
