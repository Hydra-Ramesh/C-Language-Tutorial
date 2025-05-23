#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    q = a/b;
    r = a-(q*b);
    printf("Quotient = %d\n",q);
    printf("Remainder = %d\n",r);
    return 0;
}