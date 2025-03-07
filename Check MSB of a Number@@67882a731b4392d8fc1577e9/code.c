#include<stdio.h>
int main(){
    int num, n;
    scanf("%d", &num);
    n= num >>= 1;
    if (n==0){
            printf("Set");
    }
    else{
        printf("Not Set");
    }
}
