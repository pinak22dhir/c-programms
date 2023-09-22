#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    // };
    }a,b;
    // struct pokemon pikachu;
   a.attack=90;
   a.hp=89;
    a.speed=100;
    a.tier='A';
    strcpy(a.name,"venesur");  
//    b.attack=a.attack;
//    b.hp=a.hp;
//   b.speed=a.speed;
//     b.tier=a.tier;
//     strcpy(b.name,a.name);

    b=a;//b mein change hoga par a ki exact values same
    strcpy(b.name,"venesur");
    b.attack=200;//deep copy
    printf("%d", b.attack);
    return 0;
}
