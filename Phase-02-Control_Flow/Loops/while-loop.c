#include<stdio.h>
int main(){


    //while loops
    //the while loop repeats itself only if the condition is remains true and loop exit its body when the condition become false



    //syntax
    //while(condition){
      // body of loop
    //}







    //this will not work
    int count = 0;
    while(count >= 10){
        printf("%d\n",count);
        count++;
    }


    //this will work
    int num = 20;
    while(num<=30){
        printf("%d\n",num);
        num++;
    }
}