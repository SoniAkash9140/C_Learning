
// Online C compiler to run C program online
#include <stdio.h>
#define N 50

int main() {
    int a[N][N],b[N][N],sum,c[N][N],i,j,k,m,n,p,q;
    printf("Enter Row and Column of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter Row and Column of second matrix:\n");
    scanf("%d %d",&p,&q);
    
    printf("Enter elemments of first matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
   
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
          printf("\n");
    }
    
     printf("Enter elemments of second matrix:\n");
    for(int h=0;h<p;h++){
        for(int g=0;g<q;g++){
            scanf("%d",&b[h][g]);
        }
     
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    
    // printf("First Matrix is :\n");
    //  for(i=0;i<m;i++){
    //     for(j=0;j<n;j++){
    //         printf("%d",a[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // printf("Second Matrix is :\n");
    //  for(i=0;i<p;i++){
    //     for(j=0;j<q;j++){
    //         printf("%d",b[i][j]);
    //     }
    //     printf("\n");
    // }
    
    if(n!=p){
        printf("Cannot Multiply");
    }
    else{
        for(i=0;i<m;i++){
            
          for(j=0;j<q;j++){
              sum =0;
            for(k=0;k<m;k++){
                sum+=a[i][k]*b[k][j];
                
            }
               c[i][j]=sum;
        }}
    }
     printf("multiplication of matrix is\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d",c[i][j]);
        }
         printf("\n");
     }

    
    

    return 0;
}