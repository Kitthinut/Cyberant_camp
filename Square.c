#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);

    if(c == 1){
        for(int i=1; i<=a; i++){
            printf("%d ", b);
        }
        printf("\n");
        for(int j=1; j<=a-2; j++){
            printf("%d ", b);
            for(int i=1; i<=a-2; i++){
                printf("0 ");
            }
            printf("%d ", b);
            printf("\n");
        }
        for(int i=1; i<=a; i++){
            printf("%d ", b);
        }
        printf("\n");
    }
    else if(c == 2){
        for(int i=1; i<=a; i++){
            printf("0 ");
        }
        printf("\n");
        for(int j=1; j<=a-2; j++){
            printf("0 ");
            for(int i=1; i<=a-2; i++){
                printf("%d ", b);
            }
            printf("0 ");
            printf("\n");
        }
        for(int i=1; i<=a; i++){
            printf("0 ");
        }
        printf("\n");
    }
}
