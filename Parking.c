#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter hours: ");
    scanf("%d", &a);
    
    if(a == 1){
        printf("0");
    }
    if(a <= 4){
        a--;
        int cas1 = a*20;
        printf("%d", cas1); 
    }
    if(a <= 8 && a > 4){
        a--;
        int cas2 = (60+((a-3)*30)); 
        printf("%d", cas2); 
    }
    if(a >= 9){
        a--;
        int cas3 = (180+((a-7)*50));
        printf("%d", cas3); 
    }
}
