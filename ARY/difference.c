#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int SumEven=0;
    int SumOdd=0;
    int difference=0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            SumEven+=arr[i];
        }
        else{
            SumOdd+=arr[i];
        }
    }
    difference=SumEven-SumOdd;
    printf("%d",difference);
    return 0;
}