#include<stdio.h>
int main(){
    int n, i, j, k, m;
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=n-i; j++){
            printf(" ");
        }
        for (k=1; k<=i; k++){
            printf("*");
        }
        for(m=2; m<=i; m++){
            printf("*");
        }
        printf("\n");
    }
}