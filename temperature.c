#include <stdio.h>

int main(){

    float cels, fare;
    printf("Enter the temperatur in celsius: ");
    scanf("%f", &cels);
    fare = (cels * 9/5) + 32;
    printf("%.1f", fare);

}
