// Your code here...

#include <stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a ,&b);
    printf((a>0&&b>0 || a<0&&b<0)?"False":"True");
}