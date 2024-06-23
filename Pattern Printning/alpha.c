#include<stdio.h>
int main(){
     int n;
    printf("Enter no. of rows");
    scanf("%d",&n);

    int nsp=n-1;   // spaces 
    for(int i=1; i<=n ; i++){
       
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){   //number triangle
        int m=j+64;
        char ch=m;
            printf("%c",m);
            m++;
        }
         int a=i-1;  //extra cheez
         for(int k=1;k<=i-1;k++){
            int q=k+64;
            printf("%c",q);
            a--;
        }
        printf("\n");
    }
    return 0;
}