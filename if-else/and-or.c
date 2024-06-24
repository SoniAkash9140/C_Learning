#include<stdio.h>
int main(){
    int a,b,c; 
    printf("Enter first three digit number:");
    scanf("%d",&a);

    printf("Enter second three digit number:");
    scanf("%d",&b);

    printf("Enter third three digit number:");
    scanf("%d",&c);

    if(a>b && a>c){
    printf("a is greater");
    }

    if(b>a && b>c){
    printf("b is greater");
    }

    if(c>a && c>b){
    printf("c is greater");
    }

    return 0;
} 