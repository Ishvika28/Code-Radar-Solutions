#include<stdio.h>
int main(){
    char str1[10];
    char str2[10];
    scanf("%s", str1);
    scanf("%s", str2);
    printF("You entered: %s",str1);
    printf(" and %s",str2);
}