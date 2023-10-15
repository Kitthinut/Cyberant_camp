#include <stdio.h>
#include <math.h>

int main(){
    float fut, tod, i, n;
    scanf("%f %f %f", &tod, &i, &n);
    float temp = (i/100) + 1;
    float ans = pow(temp, n);
    fut = tod * ans;
    printf("%.2f", fut);

}
