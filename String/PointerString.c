#include<stdio.h>
int main(){
    char arr[]="Code and Coffee";
    char *p = arr;
    *p = 'D';
    printf("%s",arr);
}