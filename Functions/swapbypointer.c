#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
     int a; 
    printf("Enter the number a:\n");
    scanf("%d",&a);

    int b; 
    printf("Enter the number b:\n");
    scanf("%d",&b);

    swap(&a,&b);

    printf("%d is the swap value of a:\n",a);
    printf("%d is the swap value of b:\n",b);

    return 0;
}