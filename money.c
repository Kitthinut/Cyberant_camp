#include <stdio.h>

int main(){
    float price, money;
    printf("Enter your money: ");
    scanf("%f", &money);
    printf("Enter the price: ");
    scanf("%f", &price);


    float amount = 0.07 * price;
    float all = amount + price;
    float change = money - all;

    if(change < 0){
        printf("Insufficient Funds");
    }
    else{
        printf("The total price : %.2f || The change: %.2f", all, change);
    }
}
