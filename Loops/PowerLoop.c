#include<stdio.h>
int main(){
    int a;
    printf("Enter the Base: ");
    scanf("%d",&a);
    int b;
    printf("Enter the Power: ");
    scanf("%d",&b);
    int power = 1;
    for(int i=1;i<=b;i++){
        power = power * a;
    }
    printf("%d^%d = %d",a,b,power);
}