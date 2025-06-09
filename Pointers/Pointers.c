#include<stdio.h>
int main(){
    int x = 6;//One Integer value
    char y = 'a';//One char value
    char* a = &y;//We required a char type pointer for store a char value
    int* b = &x;//We required a int type pointer for store a int value
    printf("%p\n",a);//Format specifier of the Pointer.
    printf("%p",b);
    return 0;
}