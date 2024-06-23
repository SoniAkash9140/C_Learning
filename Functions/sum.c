#include<stdio.h>
int add(int a, int b){
    return a+b;
}

int main (){
    int n; 
    printf("Enter the number:\n");
    scanf("%d",&n);

    int m; 
    printf("Enter the number:\n");
    scanf("%d",&m);

    int sum=add(n,m);
    printf("%d",sum);
    return 0;
}