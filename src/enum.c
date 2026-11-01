# include <stdio.h>

enum days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main(){
    enum days today = Wed;
    printf("%d" , today);
    return 0;
}