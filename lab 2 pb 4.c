#include<stdio.h>
int main(){
 int a;
 printf("enter the time in seconds:");
 scanf("%d",&a);
 printf("the hours is%d\n",a/3600);
printf("the min:%d\n",a%(3600*(a/3600))/60);
 printf("the value of seconds%d\n",(a%(3600*(a/3600))/60)%60);
return 0;
}