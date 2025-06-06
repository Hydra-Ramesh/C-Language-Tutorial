#include<stdio.h>
#include<math.h>//Library Function
void power(int a, int b){
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d\n",power);
}
int main(){
    // int base,exponent;
    // printf("Enter the base number:");
    // scanf("%d",&base);
    // printf("Enter the exponent:");
    // scanf("%d",&exponent);
    // power(base,exponent);
    power(2,3);
    power(2,4);
    power(2,3);
    power(2,5);
    power(2,6);
    power(2,3);
    power(2,3);


} 