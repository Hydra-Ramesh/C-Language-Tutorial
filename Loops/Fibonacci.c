#include<stdio.h>
int main(){
    int n;
    printf("Enter the term number: ");
    scanf("%d",&n);
    int t1 = 0;
    int t2 = 1;
    for(int i=3;i<=n;i++){
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    printf("The %dth term of the sequence is: %d",n,t2);
}