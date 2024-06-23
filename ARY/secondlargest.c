#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={21,9,5,45,58};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
           smax=max;
           max=arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
} 