#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    printf("enter the operation");
    scanf("%c",&ch);
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    switch (ch){
    case '+':
     c=a+b;
     printf("result is :%d",c);
     break;
    
     case '-':
     c=a-b;
     printf("result is :%d",c);
     break;

     case '/':
     c=a/b;
      printf("result is :%d",c);
      break;
      
     case '*':
    c=a*b;
    printf("result is :%d",c);
    break;
    
    default:printf("wrong input");
    }
return 0;
}

