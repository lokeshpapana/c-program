#include<stdio.h>
int main (){
    int a,b,c,max;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&a>c){
    max=a;
    }
    else if (b>a&b>c){
    max=b;
    }
    else {
    max=c;
    }
    
    printf("max is %d",max);
    return 0;

}