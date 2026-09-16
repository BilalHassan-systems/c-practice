#include<stdio.h>
int main(){
    // Write a program that asks the user for:
    // Age
    // height
    // Grade
    // Then display all three values


    int Age;
    printf("Enter your Age: ");
    scanf("%d", &Age);
    printf("Your age is: %d\n", Age);

    float Height;
    printf("Enter your Height: ");
    scanf("%f", &Height);
    printf("Your height is: %.1f\n", Height);

    char Grade;
    printf("Enter your Grade: ");
    scanf(" %c", &Grade);
    printf("Your Grade is: %c\n", Grade);
}