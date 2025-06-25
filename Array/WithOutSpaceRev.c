#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n = 5;
    int arr[5]={1,2,3,4,5};
    int i = 0;
    int j = n-1;
    printf("Original Array : ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    while(i<=j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
    printf("\n Reverse Array : ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
}