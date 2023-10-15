#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int main(){
    char input[MAX];
    int stop = 0, count = 0, sum = 0;

    do{
        gets(input);
        if(strcmp(input, "exit") == 0) stop = 1;
        else{
            sum += atoi(input);
            count++;
        }
    }while(!stop);
        if(count != 0) printf("%.2lf", (float) sum/count);
        else printf("None");

}
