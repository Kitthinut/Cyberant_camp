#include <stdio.h>

int main(){
    int a, b, count, temp;
    scanf("%d", &a);
    int c = a+1;

    for(int i=1; i<=c; i++){
        count = a % 2;  // => 0 
        temp  = a / 2;  // => 5
        a     = temp;
        printf("%d", count);
    }
}
