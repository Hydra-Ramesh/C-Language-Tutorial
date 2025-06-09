#include<stdio.h>
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 6;
    int y = 9;
    printf("%d %d\n",x,y);
    swap(x,y);
    printf("%d %d\n",x,y);
}