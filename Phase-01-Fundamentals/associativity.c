#include<stdio.h>
int main(){
    // associativity tells C which direction to evalute operators first when they have same operator precedence
    // so C evelutes from left to right

    int a = 24;
    int b = 6;
    int c = 2;

    int division_multiplication = a/b*c;

    printf("Division/Multiplication: %d\n", division_multiplication);

    int subtraction_addition = a-b+c;

    printf("Subtraction/Addition: %d\n", subtraction_addition);
}