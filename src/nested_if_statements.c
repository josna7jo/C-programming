
#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.0;
    bool isstudent = true;
    bool issenior = false;

    if(isstudent){
        if(issenior){
         printf("you get a discount of 10 percent\n");
         printf("you get a discount of 20 percent\n");
          price *= 0.7;
        }
    
    }
    else{
      printf("you get a discount of 10 percent\n");
      price *= 0.9;
    }
    
    if(issenior){
        printf("you get a discount of 20 percent\n");
        price *= 0.8;
    }


    printf("The price of a ticket is: %.2f\n", price);

    return 0;

    }