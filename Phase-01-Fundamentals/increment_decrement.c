#include<stdio.h>
int main(){
    // ++, --
    //these are operators who increase or decrease variable by 1

    // ++
    //increase by 1

    //--
    //decrease by 1

    //prefix vs postfix
    // ++x prefix
    //x++  postfix

    //x++ -> use x, then increase
    //++x -> increase, then use x



    int x = 10;

    int a = x++;
    printf("a: %d\n", a);

    int b = ++x;
    printf("b: %d\n", b);

    int c = x--;
    printf("c: %d\n", c);

    int d = --x;
    printf("d: %d\n", d);

    
}