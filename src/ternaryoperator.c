# include <stdio.h>

int main(){
    int number = 8;
    printf("%d is %s", number, (number % 2 == 0)? "even" : "odd");

    return 0;
}