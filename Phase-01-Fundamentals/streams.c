#include<stdio.h>
int main(){
    //Strems is a flow of data between your C program and an input/output sourcr.
    // input -> C program -> output
    //stdin
    //stdin means standard input
    //stdout
    //stdout means standard output



    //stdin and stdout are streams, not replacement for printf() and scanf()
    //printf() writes to stdout
    //scsnf() writes to stdin




    fputs("Hello\n", stdout);

    char ch;
    ch = fgetc(stdin);
    printf("You entered: %c\n", ch);

    fprintf(stderr, "Something went wrong!\n");
}