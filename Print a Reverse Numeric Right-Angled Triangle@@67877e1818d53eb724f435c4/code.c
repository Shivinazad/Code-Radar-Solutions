#include<stdio.h>
int main(){

    int n,num;
    scanf("%d",&n);
    num = n;
    for (int i = 1; i<n+1; i++){

    for (int j=1 ; j<=num; j++){
        printf("%d ",j);
    }printf("\n");
    num--;
}


    return 0;
}
