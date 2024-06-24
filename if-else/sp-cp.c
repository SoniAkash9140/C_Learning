#include<stdio.h>
int main (){
    int sp,cp;
    printf("Enter the cost price:");
    scanf("%d",&cp);

    printf("Enter the selling price:");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No Profit No Loss");
    }
    return 0;
}