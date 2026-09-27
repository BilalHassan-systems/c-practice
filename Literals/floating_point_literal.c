#define __USE_MINGW_ANSI_STDIO 1
#include<stdio.h>
int main(){
    //floating pint literals are numbers with a decimal point or use scientific notation.
    //basic example
    //3.14
    //10.25
    //0.4
    //-7.8

    //they are commonly with float or double

    //float price = 10.3;
    //double pi = 3.14;

    float a = 3.14;
    double b = 2.5e3;
    long double c = 3.14L;

    printf("a: %f\n", a);
    printf("b: %e\n", b);
    printf("c: %Lf\n", c);
}