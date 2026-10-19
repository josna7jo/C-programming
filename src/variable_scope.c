# include <stdio.h>

int result = 0;

int add(int a, int b) {
    int result = a + b;
    return result;
}

int subtract(int a, int b) {
    int result = a - b;
    return result;
}

int main() {
int result = subtract(3,4);
printf("%d" , result);
return 0;
}
