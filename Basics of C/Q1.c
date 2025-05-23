#include<stdio.h>
int main(){
    int a = 1;
    int b = a++ + ++a + a++ + ++a;
    printf("%d ",b);
    printf("%d",a);
}