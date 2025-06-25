#include<stdio.h>
int main(){
    //Deep Copy
    char arr[]="Ramesh";
    char *str = arr;
    str[2]='j';
    printf("%s",str);
}