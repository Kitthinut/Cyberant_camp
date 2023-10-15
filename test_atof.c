#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char num[100];
    printf("Type your price: ");
    scanf("%s", num);
    float pri = atof(num);
    float ans = pri * pri;
    printf("The Square of %s is %.2f.", num, ans);
}
