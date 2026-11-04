# include <stdio.h>
typedef struct {
    char model[20];
    int year;
    int price;
}Car;

int main(){
Car cars[] ={{"Toyota", 2020, 20000},
{"Honda", 2021, 25000},
{"Ford", 2019, 18000}};

int number = sizeof(cars)/sizeof(cars[0]);

for(int i=0; i<number; i++){
    printf("%s %d %d\n", cars[i].model, cars[i].year, cars[i].price);
}
return 0;
}