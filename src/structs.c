# include <stdio.h>
# include <string.h>

    struct player
{
    char name[12];
    int score;
};

int main(){
struct player player1; 
struct player player2;

strcpy(player1.name, "dhamu");
player1.score = 100;

strcpy(player2.name, "deepu");
player2.score = 150;

printf("%s\n",player1.name);
printf("%d\n",player1.score);
printf("%s\n",player2.name);
printf("%d\n",player2.score);

return 0;
}