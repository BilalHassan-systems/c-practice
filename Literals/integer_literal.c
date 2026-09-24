#include<stdio.h>
int main(){
    //An integer literal is a whole number value written inside directly in code.
    //for example 
    //10
    //25
    //100
    //-5
    //0
    

    //for example
    //int x = 22;
    //here 22 -> literal


    //integer literal
    int age = 22;
    printf("Age: %d\n", age);

    //Decimal - (base 10) integer literal
    int a = 10;
    int b = 250;
    int c = -50;
    printf("a: %d\nb: %d\nc: %d\n", a, b, c);


    //Octal - (base 8)

    //starts with 0
    //031 in octal represents decimal 25
    int x = 031;
    printf("Octal: %d\n", x);

    //hexadecimal - (base 16)

    //starts with 0x or 0X
    //0x19 represents decimal 25
    int y = 0x19;
    printf("hexadecimal: %d\n", y);


    //binary
    //0b11001
    //this shows 25 in decimal
    int z = 0b11001;
    printf("binary: %d\n", z);




}