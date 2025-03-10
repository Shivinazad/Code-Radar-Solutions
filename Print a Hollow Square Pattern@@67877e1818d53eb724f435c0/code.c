#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    for (int i = 1; i<n+1; i++){
        if (i==1 || i==n){
            for (int g = 1;g<=n;g++){
                printf("*");
            }printf("\n");
        }else{
            for (int j=n ; j>0; j--){
                if(j==n || j==1){
                printf("*");
                }else{
                    printf(" ");
                }
    }printf("\n");
        }
}


    return 0;
}
