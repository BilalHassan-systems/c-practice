#include<stdio.h>
int main(){
    //logical OR ||
    //when we have atleast 2 conditions but we have atleast 1 condition must be true


    //practice
    int age = 16;
    int hasPermission = 1;

    if(age>=18 || hasPermission){
        printf("Entry Allowed");
    }else{
        printf("Entry Not Allowed");
    }
}