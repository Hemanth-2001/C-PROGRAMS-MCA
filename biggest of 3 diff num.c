#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is greater than b and c\n");
    }
    else if(b>a&&b>c){
        printf("b is greater than a and c\n");
    }
    else {
        printf("c is greater than a and c\n");
    }

}