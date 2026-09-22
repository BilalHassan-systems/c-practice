#include<stdio.h>
int main(){
    //when both variables are integer so if we divide(/) them this give us integer value as result
    // for example
    // int result 10/3
    // this give result = 3
    // but actual value should be 3.33
    // but we get 3 because we use both as integer
    // to solve this issue we have to use a float
    
    
    int total = 47;
    int students = 5;


    float result = total/students;
    printf("Complete per Student: %f\n", (float)result);

    int remaining = total%students;

    printf("Remaining: %d\n", remaining);

}