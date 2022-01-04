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
    else if(c>a&&c>b){
        printf("c is greater than a and c\n");
    }
    else if(a==b&&a>c){
        printf("a and b are equal and greater than c\n");
    }
    else if(a==c&&a>c){
        printf("a and c are equal and greater than b\n");
    }
    else if(b==c&&b>a){
        printf("b and c are equal and greater than a\n");
    }
    else{
        printf("ALL are equal");
    }

    }