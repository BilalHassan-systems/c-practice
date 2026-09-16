#include<stdio.h>
int main(){
    // Make a program that:
    //1. Asks the user for one character
    //2. Reads it using getchar()
    //3. Prints it using putchar()

    char one_charater;
    printf("Enter a charater: ");
    scanf(" %c", &one_charater);
    printf("one_charater: %c\n", one_charater);


    getchar(); // this will eat enter by \n in above line

    printf("now getchar()\n");
    char ch;
    printf("Enter a charater: ");
    ch = getchar();

    printf("You entered: %c\n", ch);

    printf("Character A is printed by putchar()\n");
    char cha = 'A';
    putchar(cha);

}