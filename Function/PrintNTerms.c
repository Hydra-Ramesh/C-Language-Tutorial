#include<stdio.h>
void printing(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
}
int main(){
    int n;
    printf("Enter the number of elements you want to print:");
    scanf("%d",&n);
    printing(n);
}