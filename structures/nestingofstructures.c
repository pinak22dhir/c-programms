#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[10];
} pikachu ;
typedef struct legendarypokemon{
   pikachu normal;
    char ability[10];
}legendarypokemon;
legendarypokemon mewtwo;
mewtwo.normal.hp=120;
mewtwo.normal.attack=20;
strcpy(mewtwo.ability,"pressure");
strcpy(mewtwo.normal.name,"mewtwo");
typedef struct godpokemon{
    legendarypokemon legend;
    int specialattack;
}godpokemon;
godpokemon arceus;
arceus.specialattack=789;
strcpy(arceus.legend.ability,"turn anyone into stone");
arceus.legend.normal.attack=8;
return 0;}
//maruti.engine.bolts --> bolt/engine-bolt/maryti/engine