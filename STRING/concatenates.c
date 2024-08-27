#include<stdio.h>
#include<string.h>
int  main(){
    char S1[30]="AKASH";
    char S2[]="SONI";
    strcat(S1,S2);
    printf("String after Concatenation is %s\n",S1);
    puts(S2);
    return 0;
}
