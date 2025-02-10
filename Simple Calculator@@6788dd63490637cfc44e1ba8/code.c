#include<stdio.h>
int main(){
    int num1, num2, result;
    char ch;
    scanf("%d %d %c", &num1, &num2, &ch);
    switch (ch){
        case '+':
        result = num1+num2;
        printf("%d", result);
        break;
        case '-':
        result = num1-num2;
        printf("%d", result);
        break;
        case '*':
        result = num1*num2;
        printf("%d", result);
        break;
        case '/':
        printf("%d", result);
        break;
        default:
        printf("error");
        break;
    }
}