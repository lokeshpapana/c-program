#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter the no.of hours worked");
    scanf("%f",&a);
    printf("enter the rate per");
    scanf("%f",&b);
    printf("enter the no.of weeks in a month");
    scanf("%f",&c);
    printf("monthly payment%f",a*b*c);
    return 0;
    

}