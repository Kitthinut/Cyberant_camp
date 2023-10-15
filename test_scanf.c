#include <stdio.h>
#include <string.h>

int main(){
    int nau;
    int sip;
    float roi;
    float pan;

    printf("Enter first num: ");
    scanf("%d", &nau);
    printf("Enter second num: ");
    scanf("%d", &sip);
    printf("Enter third num: ");
    scanf("%f", &roi);
    printf("Enter fourth num: ");
    scanf("%f", &pan);

    printf("%3d\n%d\n%.6f\n%.2f", nau, sip, roi, pan);
}
