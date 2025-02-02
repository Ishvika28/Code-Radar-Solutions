#include<stdio.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%99s",&str1);
    scanf("%99s",&str2);
    printF("You entered: %s",str1);
    printf(" and %s",str2);
}