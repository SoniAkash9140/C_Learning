#include<stdio.h>
int main(){
    int a[3][3],i,j,SR,SC;
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d\n",&a[i][j]);
        }
    }

     for(i=0;i<3;i++){
        SR=SC=0;
         for(j=0;j<3;j++){
           SR=SR+a[i][j];
           SC=SC+a[j][i];
           printf("SR=%d,SC=%d",SR,SC);
        }
        printf("\n");
    }
    return 0;
}