#include<stdio.h>
int main(){
    int n, num;
    scanf("%d", &n);
    num = (num>>(n-1))&1;
    printf("%d", num);
}