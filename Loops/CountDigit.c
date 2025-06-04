#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int digit=0;
    while(n!=0){
        digit++;
        n = n/10;
    }
    printf("Number of digits in the number is: %d",digit);
    return 0;
}