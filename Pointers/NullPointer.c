#include<stdio.h>
int main(){
    int x='\0';//Null Value
    int* y = &x;
    printf("%p\n",y);
    printf("%d\n",*y);//Derefarancing
}