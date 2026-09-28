#include<stdio.h>
int main(){
    //the if statement is the most fundamental statement in c
    //An if statement tells the computer "only run this block of code if a specific condition is TRUE".
    //TRUE is represented by any non-zero value(e.g., 1, 12, -4)
    //FALSE is represented by 0


    //syntax

    //if (condition) {
        // code to run IF condition
    //}


    //practice question
    // a quality control program

    int weight = 500;

    if (weight >= 500) {
        printf("Warning: Dough batch is under weight\n");
    }
    printf("Inspection Complete\n");


    int check = 10;

    if (check == 10) {
        printf("not balence\n");
    }
}