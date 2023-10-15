#include <stdio.h>
#include <math.h>

int main(){
    double rad;
    printf("Enter radius: ");
    scanf("%lf", &rad);
    double ans = M_PI * rad * rad;
    printf("Answer: %.6f", ans);
}
