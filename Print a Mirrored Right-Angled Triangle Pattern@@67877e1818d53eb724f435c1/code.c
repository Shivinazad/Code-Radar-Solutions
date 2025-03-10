#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    for (int i = 1; i<n+1; i++){
        for (int g = n-1;g>i;g--){
            printf(" ");
        }
        for (int j=0 ; j<i; j++){
            printf("*");
    }printf("\n");
}


    return 0;
}
