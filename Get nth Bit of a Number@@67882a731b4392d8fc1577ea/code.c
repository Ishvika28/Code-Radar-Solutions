#include<stdio.h>
int main(){
    int n, num;
    scanf("%d", &n);
    num = n & (1<<n);
    printf("%d", num);
}