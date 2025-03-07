#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    while (num>1){
        num >> 1;
    }
    if (num==1){
        printf("Set");
    } 
    else{
        printf("Not Set");
    }
}
