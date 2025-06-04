#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int isPrime = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==1){
        printf("%d is a Prime Number",n);
    }else{
        printf("%d is not a Prime Number",n);
    }
}