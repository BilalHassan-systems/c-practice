#include<stdio.h>
int main(){
    //Logical-AND-&&
    //it useful when we have atleast  2 conditions and they must be true
    //it is possible by nested if but this is more clean version

    int age = 18;
    int hasID = 1;
     if(age>=18 && hasID){
        printf("Entry Allowed\n");
     }else{
        printf("Entry Not Allowed");
     }
}