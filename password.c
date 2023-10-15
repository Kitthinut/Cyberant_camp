#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int all;

    char a[100];
    char b[100];
    char c[100];
    char d[100];
    char e[100];
    scanf("%s %s %s %s %s", a, b, c, d, e);

    int an = atoi(a);
    int bn = atoi(b);
    int cn = atoi(c);
    int dn = atoi(d);
    int en = atoi(e);
    //printf("%d %d %d %d %d", an, bn, cn, dn, en);

    char ae = a[1];
    char be = b[1];
    int count = strlen(b);
    char be = b[count];
    int count1 = strlen(c);
    char ce = c[count1];
    int tae = atoi(ae);
    int tbe = atoi(be);
    int tce = atoi(ce);

    if(an >= 10 && an <= 99){
        if(bn >= 0 && bn % 2 == 0){
            int te = tae * tbe;
            if(count > 2){
                int te1 = (tbe * 2) + tce; 
                all = an + bn + te + te1;
                if(all == en){
                    printf("Pass");
                }
                else{
                    printf("Decline");
                }
            }
            else{
                count1 = strlen(c);
                ce = c[count1];
                int te2 = (tbe % 3) + tce;
                all = an + bn + te + te2;
                if(all == en){
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
