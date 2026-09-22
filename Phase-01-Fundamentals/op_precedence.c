#include<stdio.h>
int main(){
    int a = 20;
    int b = 5;
    int c = 2;
    int d = 3;

    int result_1 = a+b*c-d;
    printf("result_1: %d\n", result_1);

    int result_2 = (a+b)*c-d;
    printf("result_2: %d\n", result_2);

    int result_3 = a+b*(c-d);
    printf("result_3: %d\n", result_3);
}