#include <stdio.h>

int func1(int num) {
    num = num + 20;     // 10 + 20 = 30
    return num;
}

void func2(int *num) {
    *num = *num + 100;     // 10 + 100 = 110
}
void swap(int *num1, int *num2) {
    int temp;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
   
    int x = 10, y;

    y = func1(x);
    printf("y = %d\n", y);
    printf("func(x) = %d\n", func1(x));

    func2( &x );
    printf("x = %d\n", x);
    printf("\nx = %5d y = %5d\n", x, y);

    swap(&x, &y);
    printf("\nx = %5d y = %5d\n", x, y);

    return 0;
}
