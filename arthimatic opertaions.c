#include<stdio.h>
int main(){
    int a=0,b=0,c=0,d=0,e=0,f=0;
    printf("enter 2 numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
        c = a+b;
        d = a-b;
        e = a/b;
        f = a%b;
    printf("sum of numbers is %d\n",c); 
    printf("diff of numbers is %d\n",d);
    printf("quo of numbers is %d\n",e);
    printf("rem of numbers is %d\n",f);

    return 0;
}