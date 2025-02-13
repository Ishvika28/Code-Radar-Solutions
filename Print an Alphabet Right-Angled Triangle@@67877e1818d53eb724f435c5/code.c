#include<stdio.h>
int main(){
    int n;
    char i, j;
    scanf("%d", &n);
    for (i=97; i<=n; i++){
        for (j=97; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}