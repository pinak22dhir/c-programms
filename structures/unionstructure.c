//unions 
//only one memv=ber can be used at a time;
//only last thing is valid rest is uselees it will diminate other values
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
//doubt 2 typedef union mein structure pehle kyu declare kia pehle 
//int main mein bhi kr skter hai jaise struct mein kia
// typedef union pokemon {
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//         char name[20];
   
//     }pokemon;
int main(){
    typedef union pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
   
    }pokemon;
   
  pokemon pikachu;
    pikachu.attack=90;
    pikachu.hp=89;
    pikachu.speed=100;
    pikachu.tier='A';
strcpy(pikachu.name, "pinak");
   
 
 printf("%d \n",pikachu.attack); 
 printf("%d \n",pikachu.hp); 
 printf("%d \n",pikachu.speed);  

 printf("%c \n",pikachu.tier);  
  printf("%s \n",pikachu.name);  
    return 0;
}