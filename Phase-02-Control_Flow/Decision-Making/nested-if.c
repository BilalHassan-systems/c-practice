#include<stdio.h>
int main(){
    //nested if
    //the nested if means the if condition  have an inner if condition
    //but the inner if will work only when the outer if condition is true
    
    //syntex
    //if(condition1)
    //{
         //if(condition2)
         //{
              //code runs there if both conditions are true     
         //}
      
    //}


    int age = 20;
    int id = 1;

    if(age >= 18){
        if(id){
            printf("Entry Allowed");
        }
        else{
            printf("ID required");
        }
    }else{
        printf("UnderAge");
    }




}