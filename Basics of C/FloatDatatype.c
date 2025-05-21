#include<stdio.h>
int main(){
    float x = 5.5;
    float y = 2.2;
    float a = x+y;
    float b = x-y;
    float c = x*y;
    float d = x/y;
    printf("%.2f\n",a);
    printf("%.3f\n",b);
    printf("%.4f\n",c);
    printf("%.5f\n",d);
    printf("%f\n",x);
}