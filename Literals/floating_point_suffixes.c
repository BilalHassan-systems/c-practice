#define __USE_MINGW_ANSI_STDIO 1
#include<stdio.h>
int main(){
    //floating point suffixes specify the type of a floating point literal.
    //suffixes
    //3.14f = -> float
    //3.14 = -> double
    //3.14L = -> long double



    float a = 3.14f;
    double b = 3.1415926535;
    long double c = 3.141592653589793L;

    printf("float a: %f\n", a);
    printf("double b: %f\n", b);
    printf("long double c: %Lf\n", c);

}