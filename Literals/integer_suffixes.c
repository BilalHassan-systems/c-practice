#include<stdio.h>
int main(){
    //integer suffixes tells c which type an integer literal have.
    //common suffixes
    //10U
    //10L
    //10UL
    //10LL
    //10ULL

    //U->unsigned
    //L->long
    //LL->long long
    //UL->unsigned long
    //ULL->unsigned long long


    //difference between signed and unsigned
    //signed = -> you can store both positive and negative
    //unsigned = -> only positive can be stored



    unsigned int a = 100U;
    long int b = 100000L;
    long long int c = 9000000000LL;

    printf("unsigned a: %d\n", a);
    printf("long b: %ld\n", b);
    printf("long long c: %lld\n", c);
}