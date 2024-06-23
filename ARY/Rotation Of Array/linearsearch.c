#include<stdio.h>
int main(){
    int arr[100];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 8;
    arr[6] = 7;
    arr[7] = 8;
    arr[8] = 9;
    arr[9] = 10;
 for (int i = 0; i <= 99; i++)
 {
  if (!(arr[i]== i+1))
  {
   printf("missing number is %d" ,i+1);
   break;
  }
  
 }
    return 0;
} 