#include<stdio.h>
void decreasing(int n){
    if(n==0) return;//base case
    printf("%d\n",n);//code
    decreasing(n-1);//call
    return;
}
int main(){
    int n;
    printf("Enter the no. \n");
    scanf("%d",&n);
    decreasing (n);
    return 0;
}