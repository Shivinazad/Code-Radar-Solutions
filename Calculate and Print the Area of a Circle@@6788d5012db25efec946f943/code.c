#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    scanf("%f", &radius); 

    float area = M_PI * radius * radius;

    printf("Area: %.2f\n", area);

    return 0;
}