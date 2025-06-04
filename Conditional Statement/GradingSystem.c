#include<stdio.h>
int main(){
    int p;
    printf("Enter your Percentage: ");
    scanf("%d",&p);
    if(p>=91 && p<=100){
        printf("Exclent");
    }else if(p>=81 && p<=90){
        printf("Very Good");
    }else{
        printf("Fail");
    }
    return 0;
}