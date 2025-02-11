#include<stdio.h>
int main(){
    int n,j, i;
    scanf("%d", &n);
    for (j=1; j<=n; j++){
        for (i=n; i>=j; i--){
            printf("* ");
        }
        printf("\n");
    }

}