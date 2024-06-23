#include<stdio.h>
int main(){
     int n; 
    printf("Enter the number n:\n");
    scanf("%d",&n);

    int m; 
    printf("Enter the number m:\n");
    scanf("%d",&m);

    n=n+m;
    m=n-m;
    n=n-m;

    printf("%d is the swap value of n:\n",n);
    printf("%d is the swap value of m:\n",m);

    return 0;
}