#include<stdio.h>
void main(){
    int a,b;
    printf("enter 2 number\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a is greater than b\n");
    }
    else if(b>a){
        printf("b is greater than a\n");
    }
    else{
        printf("both are equal");
    }

    }