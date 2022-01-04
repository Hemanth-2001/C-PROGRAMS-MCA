#include<stdio.h>
void main(){
    int i =1;
    printf("odd \t even\n");
    while(i<100){
        printf("%d \t      %d\n",i ,i+1);
        i=i+2;
    }
}