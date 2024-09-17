#include<stdio.h>
void main(){
    int a=0,b=1;
    int n,sum=0;
    printf("enter no.of terms:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=0;i<n;i++)
{
    sum=a+b;
    printf("%d",sum);
    a=b;
    b=sum;
}
}