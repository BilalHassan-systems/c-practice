#include<stdio.h>
int main(){
    // compound assignment operators combine an operation + assignment into an ooperator
    // += -> x = x + value
    // -= -> x = x - value
    // *= -> x = x * value
    // /= -> x = x / value



    int balence = 1000;

    balence+= 500;
    balence-=200;
    balence*=2;
    balence/=4;
    balence%=7;

    printf("Balence: %d\n", balence);
}