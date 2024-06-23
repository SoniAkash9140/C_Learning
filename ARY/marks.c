#include<stdio.h>
int main(){
    int marks[10]={91,23,31,56,79,58,65,75,100,22};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}