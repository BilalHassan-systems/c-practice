#include<stdio.h>
int main(){
    //if-else
    //so when we have to deal with mutually exclusive outcomes there come if-else
    //it works like if but if the condition is true the first braces runs code and if the condition is false the 2nd braces run code


    //syntax
    //if (condition) {
        //it runs if the condition the true
    //} else {
        //it runs if the condition is false
    //}


    //practice question
    

    int temperature = 180;

    if(temperature >= 200){
        printf("Oven Ready, start baking");

    } else {
        printf("Oven heating: temperature is too low");

    }
}