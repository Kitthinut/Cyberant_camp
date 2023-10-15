#include <stdio.h>

int main(){
    float base, height;
    printf("Enter Base: ");
    scanf("%f", &base);
    printf("Enter Height: ");
    scanf("%f", &height);
    float ans = 0.5 * base * height;
    printf("Answer is %.2f", ans);
}
