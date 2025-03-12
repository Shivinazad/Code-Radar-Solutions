#include<stdio.h>
int main(){

    int n,num=1;
    scanf("%d",&n);
    for (int i = 0; i<n; i=i+1){
        for(int g = n-1;g>i ; g--){
            printf(" ");
        }

    for (int j=0 ; j<num; j=j+1){
        printf("*");
        
    }printf("\n");
    num=num+2;
}

for (int ii = 1; ii<n; ii++){
        for(int gg =0 ;gg<ii ; gg++){
            printf(" ");
        }num = num-2;

    for (int jj=1 ; jj<num; jj++){
        printf("*");
        
    }printf("\n");
}


    return 0;
}
