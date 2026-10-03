#include<stdio.h>
int main(){
    //continue
    //it means the skip of a iteration


    //important 
    //if the continue become true it skip that iteration but remaining iterations run

    for(int i = 1; i <= 20; i++){
        if(i%3==0){
            continue;
        }
        printf("%d \n",i);
    }
}