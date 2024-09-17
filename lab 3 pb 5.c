#include<stdio.h>
int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    if (a%2==0){
    printf("it is an even number");
    }
    else{
    printf("it is odd");
    }
    return 0;
}