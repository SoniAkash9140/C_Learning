#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char name[30];
    printf("Enter Name\n");
    gets(name);
    count=strlen(name);
    printf("The length is %d",count);
    return 0;
}