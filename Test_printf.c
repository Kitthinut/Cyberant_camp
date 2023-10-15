#include <stdio.h>
#include <string.h>


int main(){

    char word[100],temp[100];
    gets(word);
    printf("Hello, ");
    puts(word);
    gets(temp);
    strcpy(word, temp);
    printf("Hello, ");
    puts(word);

}
