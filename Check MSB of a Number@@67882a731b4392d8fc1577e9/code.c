#include<stdio.h>
int main(){
    int num, n;
    scanf("%d", &num);
    if (n>1){
        n= num >>= 1;
        printf("%d", num);
    }
}