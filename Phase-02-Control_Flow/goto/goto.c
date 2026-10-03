#include<stdio.h>
int main(){
    //goto
    //it jumps from one line to another line

    //goto label;

    //label:
       //label


    //impotantant
    //goto can make large programs difficult to understand because execution can jump around many directions.



    int i = 1;
    start:
    printf("%d\n",i);
    i++;
    if(i <= 5)
       goto start;
}