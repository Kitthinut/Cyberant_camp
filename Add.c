#include <stdio.h>

int main(){
    long long a, temp = 0, count = 0;
    scanf("%lld", &a);
    
    if(a<0){
        a = a*-1;
    }
    count = count + (a % 10);

    for(int i = 1; a > 0; i++){
    a = a / 10;      // 123 % 10 = 3  123 % 100 = 23
    temp = (a % 10) + temp;
    }
    long long d = temp + count;
    printf("%lld", d);
    
    
}
