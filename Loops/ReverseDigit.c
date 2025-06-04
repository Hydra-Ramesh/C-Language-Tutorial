#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int rev = 0;
    while(n!=0){
        int ld = n%10;
        rev = rev * 10 + ld;
        n = n/10;
    }
    printf("Reverse Number: %d",rev);
}