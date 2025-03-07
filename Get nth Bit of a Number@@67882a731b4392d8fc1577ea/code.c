#include<stdio.h>
int main(){
    int n, num;
    scanf("%d", &n);
    num = 1>>(n-1);
    printf("%d", num);
}