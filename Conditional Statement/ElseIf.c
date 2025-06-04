#include<stdio.h>
int main(){
    int sp = 20;
    int cp = 20;
    if(sp>cp){
        printf("Profit");
    }else if(sp<cp){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}