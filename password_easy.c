#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d, e, all;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int an = a / 10;     //หลักสิบ a
    int bn = (b / 10) % 10;     //หลักสิบ b
    int bnb = b % 10;    //หลักหน่วย b
    int cnc = c % 10;    //หลักหน่วย c
    printf("an = %d || bn = %d || bnb = %d || cnc = %d\n", an,bn,bnb,cnc);

    if(a >= 10 && a <= 99){
        if(b % 2 == 0){
            int ab = an * bnb;

            if(b >= 10){
                int b2 = (bn * 2) + cnc;
                all = a + b + ab + b2;
                
                if(all == e){
                    printf("Pass");
                }
                else{
                    printf("Decline");
                }
                
            }
            else{
                int b3 = (bnb % 3) + cnc;
                all = a + b + ab + b3;

                if(all == e){
                    printf("Pass");
                }
                else{
                    printf("Decline");
                }
            }

        }
        else{
            printf("Decline");
        }
    }
    else{
        printf("Decline");
    }

}
