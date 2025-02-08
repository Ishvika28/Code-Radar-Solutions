#include<stdio.h>
int main(){
    int a, b, c, sum1, sum2, sum3;
    scanf("%d %d %d", &a, &b, &c);
    sum1 = a+b;
    sum2 = b+c;
    sum3 = a+c;
    if (sum1>c && sum2>a && sum3>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}