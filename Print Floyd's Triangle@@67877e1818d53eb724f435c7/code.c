#include<stdio.h>
int main(){

    int n;
    int num = 1;
    scanf("%d",&n);
    for (int i = 1; i<n+1; i++){
    for (int j=0 ; j<i; j++){
        printf("%d ",num);
        num++;
    }printf("\n");
}


    return 0;
}

