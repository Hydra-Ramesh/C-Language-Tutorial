#include<stdio.h>
#include<string.h>
int main(){
    char s1[]= "Ramesh";
    char s3[]=" Das";
    char s2[100];
    strcpy(s2, s1);
    printf("%s",s2);
    printf("\n%d",strlen(s1));//String Length
    strcat(s1,s3);//Concatination
    printf("\n%s",s1);
    printf("\n%d",strcmp(s1,s2));//String Compare True False
}