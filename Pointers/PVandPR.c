#include<stdio.h>
void change(int* y){
    *y = *y+1;
}
int main(){
    int x = 5;
    change(&x);
    printf("%d",x);
}