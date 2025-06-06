#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int divi(int a, int b){
    return a/b;
}
int modulus(int a, int b){
    return a%b;
}
void add1(int a, int b){
    printf("%d\n",a+b);
}
void sub1(int a, int b){
    printf("%d\n",a-b);
}
void mul1(int a, int b){
    printf("%d\n",a*b);
}
void divi1(int a, int b){
    printf("%d\n",a/b);
}
void modulus1(int a, int b){
    printf("%d\n",a%b);
}
int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %d\n", divi(a, b));
    printf("Modulus: %d\n", modulus(a, b));
    add1(a, b);
    sub1(a, b);
    mul1(a, b);
    divi1(a, b);
    modulus1(a, b);
    return 0;
}