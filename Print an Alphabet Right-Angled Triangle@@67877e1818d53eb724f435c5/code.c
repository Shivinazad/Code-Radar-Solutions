#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    for (int i = 1; i<n+1; i++){
        int num = 65;
    for (int j=0 ; j<i; j++){
        printf("%c ",(char)num);
        num++;
    }printf("\n");
}


    return 0;
}
