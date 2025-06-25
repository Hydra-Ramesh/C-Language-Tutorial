#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int isPresent = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            isPresent = 1;
            break;
        }
    }
    if(isPresent == 0){
        printf("Number is not Available");
    }else{
        printf("Number is Available");
    }
}