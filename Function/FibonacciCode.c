#include<stdio.h>
#include<stdio.h>
int fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    for(int i=3;i<=n;i++){
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return t2;
}
int main(){
    for(int i=3;i<=10;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}