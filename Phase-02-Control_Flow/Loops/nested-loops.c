#include<stdio.h>
int main(){
    //Nested loop
    //a nested loop is a  loop inside another loop

    //for(...)
       //{
           //for(...)
                //{
                    //code
            //}
    //}


    //impotant idea
    //for every one iteration of the outer loop, the inner loop completes all of its iterations.
    for(int i = 0; i <= 4; i++){
     for(int i = 0; i <= 3; i++){
       printf("* ");
          
    }  
    printf("\n"); 
    }
}