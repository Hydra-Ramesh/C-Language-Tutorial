#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n!=0){
        int r = n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("Sum of Digits: %d",sum);
}