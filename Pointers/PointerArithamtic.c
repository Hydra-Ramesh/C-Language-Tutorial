#include<stdio.h>
int main(){
    int x = 6;
    int y = 3;
    int* a = &x;
    int* b = &y;
    int c = *a + *b;
    printf("%d",c);
}