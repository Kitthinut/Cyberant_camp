#include <stdio.h>
#include <string.h>

int main(){
    char word[100], temp[100];
    gets(word);
    gets(temp);
    strcat(word, temp);
    puts(word);
}
