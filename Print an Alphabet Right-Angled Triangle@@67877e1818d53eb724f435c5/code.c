#include<stdio.h>
int main(){
    int n;
    int i, j;
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            j=+97;
            printf("%c ", j);
        }
        printf("\n");
    }
}