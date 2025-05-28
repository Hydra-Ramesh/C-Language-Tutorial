#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%5==0 && x%15==0){
        printf("%d is divisible by both 5 and 15",x);
    }else{
        printf("%d is not divisible by both 5 and 15",x);
    }
    return 0;
}