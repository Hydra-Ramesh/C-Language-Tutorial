#include<stdio.h>
#include<math.h>//Library Function
int power(int a, int b){
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    return power;
}
int main(){
    int res = power(2,3);
    printf("%d",res);
} 