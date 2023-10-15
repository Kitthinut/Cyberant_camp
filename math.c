#include <stdio.h>
#include <math.h>

int main(){
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    double d = a * a;
    double e = b * b;
    double an = d + e;

    double ans = sqrt(an);
    printf("%.6lf", ans);
}
