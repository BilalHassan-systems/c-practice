#include<stdio.h>
int main(){
    //break
    //break immediately terminate the nearest loop or switch statement.
    
    
    //syntax
    //break;



    //important point
    //when break become true it does not mean skip an iterantion actually it means exit the loop
    //it  stops the entire loop when become true


    //why useful break statement
    //when we are loking for a number when we meet that number there is no reason to continue loop so here is break statement useful we stop and exit the loop

    //practice
    while(1){
        int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a<0){
        printf("Loop is Stopped \n");
        break;
        
    }else{
        printf("square is: %d\n", a*a);
    }

    }
    
}