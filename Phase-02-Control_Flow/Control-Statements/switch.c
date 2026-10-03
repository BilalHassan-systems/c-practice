#include<stdio.h>
int main(){
    //switch
    //when we have a condition against many several other specific values
    
    
    //difference between if/if-else   and    switch
    //if/if-else useful for complex conditions and ranges but when we are deling with specific numbers we use switch



    int days = 7;
    switch(days){
        case 1:
        printf("Saturday\n");
        break;

        case 2:
        printf("Sunday\n");
        break;

        case 3:
        printf("Munday\n");
        break;

        case 4:
        printf("Tuesday\n");
        break;

        case 5:
        printf("Wednesday\n");
        break;

        case 6:
        printf("Thursday\n");
        break;

        case 7:
        printf("Friday\n");
        break;

        default:
        printf("Invalid Value");

    }
}