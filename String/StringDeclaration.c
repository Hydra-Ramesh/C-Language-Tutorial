#include<stdio.h>
int main(){
    //Litarals or Char Array
    char arr[]={'R','A','M','E','S','H',' ','D','A','S',' ','I','S',' ','A',' ','B','A','D',' ','B','O','Y'};
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
    //Without Litarals or String
    char str[]="Code And Coffee";
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");
    printf("%c",str[5]);
    printf("\n");
    printf("%d",str[5]);
    printf("\n");
    printf("%c",69);
    printf("\n");
    char brr[5];
    for(int i=0;i<5;i++){
        scanf("%c",&brr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%c",brr[i]);
    }
    return 0;
}