#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length:");
    scanf("%d",&l);

    printf("Enter the breadth:");
    scanf("%d",&b);

    int area=(l*b);
    int parameter=2*(l+b);

    if(area>parameter){
        printf("Area is greater than parameter");
    }

    if(parameter>area){
        printf("parameter is greater than area");
    }

    if(area==parameter){
        printf("Area is equal to parameter");
    }
    return 0;
}