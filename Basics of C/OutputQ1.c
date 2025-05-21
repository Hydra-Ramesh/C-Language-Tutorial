#include<stdio.h>
int main(){
    int a = 5;
    int b = 5;
    int x = a++ + ++b;
    printf("%d\n",x);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}