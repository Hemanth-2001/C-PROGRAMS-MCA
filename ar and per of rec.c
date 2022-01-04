#include<stdio.h>
void main(){
    int l=0,b=0,a=0,p=0;
    printf("enter l and b:");
    scanf("%d",&l);
    scanf("%d",&b);
    a = l*b;
    p = 2*(l+b);
    printf("area is %d and perimeter is %d", a,p);

}