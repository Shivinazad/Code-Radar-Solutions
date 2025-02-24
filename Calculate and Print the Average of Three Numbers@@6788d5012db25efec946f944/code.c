// Your code here...
#include <stdio.h>
void main(){
    int num1,num2,num3;
    float avg;
    scanf("%d %d %d",&num1,&num2,&num3);
    avg = (float)(num1+num2+num3)/3;
    printf("Average: %.2f",avg);
}