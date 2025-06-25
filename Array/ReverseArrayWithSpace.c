#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size of the Array : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %dth Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("The Array is : ");
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        brr[n-i-1] = arr[i];
    }
    printf("\n The Reverse array is : ");
    for(int i=0;i<n;i++){
       printf("%d ",brr[i]);
    }
    return 0;
}