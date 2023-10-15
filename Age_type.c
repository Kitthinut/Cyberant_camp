#include <stdio.h>

int main(){
    int age;
    char str[100];
    printf("Enter age: ");
    scanf("%d", &age);
    if(age >= 60){
        printf("Senior");
    } 
    else if(age >= 40 && age <= 59){
        printf("Middle Age");
    }
    else if(age >= 20 && age <= 39){
        printf("Adult");
    }
    else if(age >= 13 && age <= 19){
        printf("Teen");
    }
    else if(age >= 5 && age <= 12){
        printf("Child");
    }
    else if(age >= 2 && age <= 4){
        printf("Toddler");
    }
    else if(age >= 0 && age <= 1){
        printf("Infant");
    }
    else{
        printf("Are you BORN yet?");
    }
}
