//electricity bill calculator
#include<stdio.h>
int main()
{   
    float unit,money;
    printf("Enter the units used : ");
    scanf("%f",&unit);
    if(unit<=200){
        money=unit*0.8;
    }else if(unit<=300){
        money=(unit-200)*0.9+200*0.8;
    }else if(unit>300){
        money=(unit-300)+100*0.9+200*0.8;
        if(money>400){
            money=money+money*0.15;
        }
    }
    money=money+100;
    printf("Your electricity bill is : %g",money);
    return 0;
}