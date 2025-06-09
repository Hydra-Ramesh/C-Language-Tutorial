#include<stdio.h>
int main(){
    int x = 6;
    int* b = &x;//Single Pointer
    int** c = &b;//Double Pointer
    printf("%d",*b);//Derefarencing of Pointer
    printf("\n%p",b);
    printf("\n%p",c);
    return 0;
}