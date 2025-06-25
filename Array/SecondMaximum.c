#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int maxi = INT_MIN;
    int second_max = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]<maxi &&second_max <maxi){
            second_max = arr[i];
        }
    }
    printf("%d",second_max);
}