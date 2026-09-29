#include<stdio.h>
int main(){

    //else-if
    //else-if works there when we have many options but we have to choose only one


    //syntax
    
    //if(condition){
        //printf("");  code run there
    //}else if(condition){
        //printf("");  code run there
    //}else if(condition){
        //printf("");  code run there
    //}else if(condition){
        //printf("");  code run there
    //}else {
        //printf("");  code run there
    //}

    int temperature = 28;
    if(temperature>45){
        printf("Yeast killed");
    }else if(temperature >=35 && temperature <=45){
        printf("Rapid Fermentation");
    }else if(temperature >=25 && temperature <=34){
        printf("Optimal Fermentation");
    }else if(temperature >=15 && temperature <=24){
        printf("Slow Fermentation");
    }else {
        printf("Inactive Yeast");
    }

}