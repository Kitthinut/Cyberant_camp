#include <stdio.h>
#include <string.h>

int main(){
    char haffu[100];
    printf("Enter word: ");
    scanf("%s", &haffu);
    printf("Length of %s are: %d", haffu, strlen(haffu));
}
