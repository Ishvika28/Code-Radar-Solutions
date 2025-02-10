#include<stdio.h>
int main(){
    float num1, num2, result;
    char ch;
    scanf("%f %f %c", &num1, &num2, &ch);
    switch (ch){
        case '+':
        result = num1+num2;
        printf("%.0f", result);
        break;
        case '-':
        result = num1-num2;
        printf("%.0f", result);
        break;
        case '*':
        result = num1*num2;
        printf("%.0f", result);
        break;
        case '/':
        result = num1/num2;
        printf("%.0f", result);
        break;
        default:
        printf("error");
        break;
    }
}