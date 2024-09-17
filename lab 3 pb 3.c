#include<stdio.h>
int main(){
    int a;
    printf("enter the value of number:");
    scanf("%d",&a);
    if (a<0){
    printf("it is negative");
    }
    else if (a>0){
        printf("it is positive");
    }
    else{
        printf("zero");
    }
     return 0;
}