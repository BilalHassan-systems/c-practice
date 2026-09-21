#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;

    // AND operator
    //both conditions should be true then result is true that is 1
    printf("%d\n", a<b && b>15);

    // OR operator 
    // if one condition is true the result is true
    printf("%d\n", a<20 || b>30);



    int x = 1;

    // Not operator
    // it will change the result
    printf("%d\n",x!=1 );
}