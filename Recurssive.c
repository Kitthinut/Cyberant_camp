#include <stdio.h>

int sum(int num){
    if(num < 0)
    return 0;
    else
    return num + sum(num-1);
}

int sum_from_to(int num1, int num2){
    if(num2 <= num1)
    return num1;
    else
    return num2 + sum_from_to(num1, num2-1);
}

int gcd(int num1, int num2){
    if(num2 == 0)
    return num1;
    return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2){
    return num1 * num2 / gcd(num1, num2);
}

int nCr(int n, int r){
    if(r == 0 || n == r)
    return 1;
    else if(r == 1)
    return n;
    else
    return (nCr(n - 1, r-1) + nCr(n - 1, r));
}

int main(){
    int n, n1, n2;
    printf("n = ");
    scanf("%d", &n);
    printf("n1 n2 = ");
    scanf("%d %d", &n1, &n2);
    printf("Summation from 1 to %d is %d\n", n, sum(n));
    printf("Summation from %d to %d is %d\n", n1, n2, sum_from_to(n1, n2));

    printf("GCD of %d and %d is %d\n", n1, n2, gcd(n1, n2));
    printf("LCM of %d and %d is %d\n", n1, n2, lcm(n1, n2));
    printf("NCR of %d and %d is %d\n", n1, n2, nCr(n1, n2));

    return 0;
}
