#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("A is grestest\n");
        }else{
            printf("C is grestest\n");
        }
    }else{
        if(b>c){
            printf("B is grestest\n");
        }else{
            printf("C is grestest\n");
        }
    }
}