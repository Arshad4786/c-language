#include<stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int power;
        int attack;
                 
    }pikachu, raichu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.power=80;

    raichu.hp=60;
    raichu.attack=70;
    raichu.power=80;
    printf("%d",pikachu.hp);

    return 0;

}