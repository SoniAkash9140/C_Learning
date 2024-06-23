#include<stdio.h>
int main(){
    int m;
    printf("Enter no. of rows");
    scanf("%d",&m);

    for(int i=1; i<=m; i++){
        if(m%2!=0){
        for(int j=1;j<=i;j++){
            printf("%d",j);
            }
        printf("\n");
        }
    }
    return 0;
}