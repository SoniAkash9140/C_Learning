#include<stdio.h>
void increasing(int n){
    if(n==0) return;//base case
    increasing(n-1);//call
    printf("%d\n",n);//code
    return;
}
int main(){
    int n;
    printf("Enter the no. \n");
    scanf("%d",&n);
    increasing (n);
    return 0;
}