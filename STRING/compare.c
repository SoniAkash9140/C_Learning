#include<stdio.h>
#include<string.h>
int  main(){
    int value;
   char s1[]="hello";
   char s2[]="welcome";
   value=strcmp(s1,s2);
   if (value==0){
    printf("Same");
   }
   else{
    printf("Not Same\n");
   }
   printf("%d ",value);
    return 0;
}
