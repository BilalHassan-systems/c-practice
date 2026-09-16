#include<stdio.h>
int main(){
    // write a program that covers:
    // Name
    // Age
    // height
    // Grade
    char Name[] = "Bilal";
    int Age = 22;
    float Height = 5.7;
    const char Grade = 'B';

    printf("Age: %d\n", Age);
    printf("Name: %s\n", Name);
    printf("Height: %.1f\n", Height);
    printf("Grade: %c\n", Grade);

}