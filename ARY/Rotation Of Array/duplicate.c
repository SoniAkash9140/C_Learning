#include<stdio.h>
int main(){
    int arr[7];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 5;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    arr[6] = 7;
 for (int i = 0; i <= 6; i++)
 {
    for(int j=i+1;j<=6;j++){
        if(arr[i]==arr[j]){
            printf("%d is the duplicate element",arr[i]);
            break;
        }
    }
    
  
 }
    return 0;
} 