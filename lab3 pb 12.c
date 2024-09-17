// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the value of month number");
//     scanf("%d",&a);
//     if (a==2){
//         printf("it has 28 days");
//     }
//     else if (a==1,3,5,7,9,11){
//         printf("it has 31 days");
//     }
//     else{
//         printf("it has 30 days");
//     }
//     return 0;
//     }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the angles of triangle:");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a+b+c==180){
//         printf("the triangle is valid");
//     }
//     else{
//         printf("the triangle is not valid");
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("enter hte sides of the triangle");
// scanf("%d%d%d",&a,&b,&c);
// if(a+b>c&b+c>a&c+a>b){
//     printf("it is a valid triangle");

// }
// else{
//     printf("it  is not a triangle");
// }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the sides of the triangle");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a==b==c){
//         printf("it is a equivalent triangle");
//     }
//     else if (a==b!=c&a+b>c&b+c>a&c+a>b){
//         printf("it is a isosceles triangle");
//     }
//     else if (a!=b!=c&a+b>c&b+c>a&c+a>b){
//     printf("it is a scalene triangle");
//     }
//     else{
//         printf("not a triangle");
//     }
    
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,b,c;
//     printf("enter the coefficents of the quadratic equation");
//     scanf("%f%f%f",&a,&b,&c);
//     printf("the first rootb of the equation is:%f\n",(-a+sqrt(b*b-4*a*c))/2*a);
//     printf("the second root of the equation is:%f",(-a-sqrt(b*b-4*a*c))/2*a);
//   return 0;  
// }
//  #include<stdio.h>
//  int main(){
//     float a,b;
//     printf("enter the revenue and spending");
//     scanf("%f%f",&a,&b);
//     if (a-b>0){
//         printf("it is a profit");
//     }
//     else if (a-b==0){
//         printf("no profit or loss");
//     }
//     else{
//         printf("it is a loss");
//     }
//     return 0;
//  }
// #include<stdio.h>
// int main(){
//    int a;
//    printf("enter the percentage of the student");
//    scanf("%d",&a);
//    if (a>=90){
//     printf("A grade");
//    } 
//    else if (a>=80){
//     printf("B grade");
//    }
//    else if (a>=70){
//     printf("C grade");
//    }
//    else if(a>=60){
//     printf("D geade");
//    }
//    else if(a>=40){
//     printf("E grade");
//    }
//    else{
//     printf("F grade");
//    }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//      char a;
//      printf("enter any character:");
//      a=getchar();
//      if (isalpha(a)>0){
//         printf("it is a alphabet");
//      }
//      else{
//         printf("i don't know");
//      }
//     return 0;
// }
#include<ctype.h>
#include<stdio.h>
// int main(){
//     char x;
//     printf("enter any character:");
//     x=getchar();
//     if (isaplha(x)>0&&x=='a','e','i','o','u'){
//         printf("they are vovels");
//     }
//     else if (isaplha(x)>0 && x!='a','e','i','o','u'){
//         printf("they are consonents");
//     }
//     else {
//         printf("i dont know");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char a;
//     printf("enter any character:");
//     a=getchar();
//     if (isalpha(a)>0){
//         printf("it is alphabets ");
//     }
//     else if(isdigit(a)>0){
//         printf("it is digits");
//     }
//     else {
//         printf("i dont know");
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char a;
//     printf("enter any character");
//     a=getchar();
//      if(islower(a)>0){
//         printf("it is a lower case");
//     }
//     else if(isupper(a)>0){
//         printf("it is a upper case");
//     } 
//     else{
//         printf("i don't no");
//     }
//     return 0;
// }
//   #include<ctype.h>
// int main(){
//     char a;
//     printf("Enter any character");
//     a = getchar();
//     if (a=='a','e','i','o','u'){
//         printf("5 points");
//     }
//     else if (isdigit(a)>0){
//         printf("10 points");
//     }
//     else{
//         printf("0 points");
//     }
//     return 0;
// }    
#include<stdio.h>
int main(){
    char a;
    printf("enter any character:");
    a=getchar();
    if(islower(a)>0){
        printf("hi");
    }
    else if(isupper(a)>0){
        printf("bye");
    }
    else{
        printf("go hell");
    }
    return 0;
}