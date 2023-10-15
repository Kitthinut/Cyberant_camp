#include<stdio.h>

int main(){
    
    int day1,hrs1,min1,sec1;
    scanf("%d %d %d %d",&day1,&hrs1,&min1,&sec1);  //b=a, c=b
    int day2,hrs2,min2,sec2;
    scanf("%d %d %d %d",&day2,&hrs2,&min2,&sec2);  //f=d, g=c
    int secs;
    
    if(day1 >= 32 || day2 >= 32 || hrs1 >= 24 || hrs2 >= 24 || min1 >= 60 || min2 >= 60 || sec1 >= 60 || sec2 >= 60){
        printf("Invalid Date");
        
    }
    else{
        //Find the seconds to count for the day
    if(day1 <= 32 || day2 <= 32){                                           
        if(sec1>sec2){
            sec2 = ((60 + sec2) - sec1);
            min2 = min2 - 1;
        }
        else{
            sec2 = sec2 - sec1;
        }
        if(min1>min2){
            min2 = ((60 + min2) - min1);
            hrs2 = hrs2 - 1;
        }
        else{
            min2 = min2 - min1;
        }
        if(hrs1>hrs2){
            hrs2 = ((24 + hrs2) - hrs1);
            day2 = day2 - 1;                  
        } 
        else{
            hrs2 = hrs2 - hrs1;
        }
        if(day1>day2){
            day2 = ((31 + day2) - day1);
        }  
        else{
            day2 = day2 - day1;
        }
        printf("Date: %.2d %.2d %.2d %.2d\n", day2, hrs2, min2, sec2);

    }                                     
    else{
    }
    }

}
