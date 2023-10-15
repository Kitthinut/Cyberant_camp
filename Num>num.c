#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b){
        printf("The greater number is %d", a);
    }
    else if(b>a){
        printf("The greater number is %d", b);
    }
    else{
        printf("Both are equivalent");
    }
}
