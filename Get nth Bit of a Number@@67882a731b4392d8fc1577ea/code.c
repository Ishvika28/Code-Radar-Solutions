#include<stdio.h>
int main(){
    int n, k, num;
    scanf("%d %d", &k, &n);
    num = k >> n-1;
    printf("%d", num);
}