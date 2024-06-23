#include<stdio.h>
int main(){
    int n;
    printf("enter the no.");
    scanf("%d",&n);

    for(int i=1; i<=(n/2)+1; i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1; j<=(n/2)+1;j--){
            printf("*");
        }

        for(i=1; i<=n/2; i--){
            for(int j=(n/2)-i; j<=1; j--){
            printf(" ");
        }
        for(int j=(n/2)-i; j<=n/2; j++){
            printf("*");
        }
        }
        printf("\n");
        
    }
    return 0;
}