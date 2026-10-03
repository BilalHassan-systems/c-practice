#include<stdio.h>
int main(){
    //label
    //label is the target where goto jumps.
    //this is like a bookmark in code

    //important
    //label itself is nothing its just a marker/name

    int i = 1;
    start:  // <-- this is label
    printf("%d\n",i);
    i++;
    if(i <= 5)
       goto start;



}