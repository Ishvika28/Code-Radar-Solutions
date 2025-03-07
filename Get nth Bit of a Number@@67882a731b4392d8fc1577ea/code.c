#include<stdio.h>
int main(){
    int n, k, i=1, j=0;
    scanf("%d %d", &k, &n);
    if((k >> (n-1)) & 1){
        printf("%d", i);
    }
    else{
        printf("%d", j);
    }
}