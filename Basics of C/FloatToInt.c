#include<stdio.h>
int main(){
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    int b = a;
    float c = a-b;
    printf("The fractional part of the number is: %f\n",c);
    printf("The integer part of the number is: %d",b);
}