#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%3==0){
        printf("%d is divisible by 3\n",x);
        if(x%5==0){
            printf("%d is divisible by 5 and 3\n",x);
            if(x%15==0){
                printf("%d is divisible by 5 and 3 and 15\n",x);
            }else{
                printf("%d is divisible by 5 and 3 but not by 15\n",x);
            }
        }else{
            printf("%d is divisible by only 3 but not by 5 and 15\n",x);
        }
    }else{
        printf("%d is not divisible by those number.\n",x);
    }
    return 0;
}