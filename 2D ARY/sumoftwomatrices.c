#include<stdio.h>
int main (){
    int a[2][3],b[2][3],i,j,sum[2][3];
    printf("Enter the elements of first Matrix:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Second Matrix:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of Matrices is : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}