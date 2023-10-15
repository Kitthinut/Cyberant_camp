#include <stdio.h>

int main(){
    char haffu[100];
    char huffu[100];
    printf("Enter word: ");
    scanf("%s", &haffu);
    printf("Enter another word: ");
    scanf("%s", &huffu);
    printf("%d", strcmp(haffu, huffu));
}
