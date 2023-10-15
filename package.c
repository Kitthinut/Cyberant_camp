#include <stdio.h>

int main(){
    int load, perp, temp; 

    printf("Enter sum of packages: ");
    scanf("%d", &load);
    printf("Enter packages per round: ");
    scanf("%d", &perp);
    int round = load / perp;
    int remain = load % perp;
    if(remain <= 1){
        printf("%d round", round);
    }
    else{
        temp = round + 1;
        printf("%d round", temp);
    }

}
