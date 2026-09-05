#include<stdio.h>
#include<string.h>


int main(){

    int age ;
    printf("Enter your age:");
    scanf("%d", &age);

    float height;
printf("Enter your height: ");
scanf("%f", &height);

double salary;
printf("Enter your salary: ");
scanf("%lf",&salary);

char grade;
printf("Enter your grade: ");
scanf(" %c",&grade);


 

char name[50];
printf("Enter your name: ");
scanf("%49s",name);


printf("%s\n", name);
printf("%d\n", age);
printf("%f\n", height);
printf("%c\n",grade);
printf("%lf\n", salary);

return 0;


}