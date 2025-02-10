#include<stdio.h>
int main(){
    int num1, num2, result;
    char ch;
    scanf("%d %d %c", &num1, &num2, &ch);
    result = num1 ch num2;
    switch (ch){
        case '+':
        printf("%d", result);
    }
}