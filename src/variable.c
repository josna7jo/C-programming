#include <stdio.h>
#include <stdbool.h>

int main(){

// int 
    int age = 20;
int year = 2006;
    printf("I am % years old\n",age);
printf("the year is %d\n",year);

//float
float gpa =3.5;
float price = 19.99;
printf("your gpa is %.1f\n",gpa);
printf("The price is %.2f\n",price);

// double
double pi = 3.14159234578;
printf("The value of pi is %lf\n",pi);

//char
char grade ='F';
printf("Your grade is %c\n",grade);

//more than one character
char name[] = "cheers";
printf("Hello %s\n",name);

//bool
bool isOnline = false;

if(isOnline){
printf("You are online");

}
else{
printf("You are offline");
}
return 0;
}