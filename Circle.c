#include <stdio.h>
#define pi 3.14

int main(){
    float rad;
    printf("Enter radius: ");
    scanf("%f", &rad);
    float ans = pi * rad * rad;
    printf("Answer: %.2f", ans);1
}
