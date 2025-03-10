#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    for (int i = 1; i<4+1; i++){
        if (i==1 || i==4){
            for (int g = 1;g<=4;g++){
                printf("*");
            }printf("\n");
        }else{
            for (int j=4 ; j>0; j--){
                if(j==4 || j==1){
                printf("*");
                }else{
                    printf(" ");
                }
    }printf("\n");
        }
}


    return 0;
}
