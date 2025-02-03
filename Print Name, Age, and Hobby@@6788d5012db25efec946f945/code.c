#include<stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%99s %d %99s", &name, &age, &hobby);
    printf("Name: %s", name);
    printf("/nAge: %d", age);
    printf("/nHobby: %s", hobby);
}