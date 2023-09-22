#include<stdio.h>
#include<string.h>
int main(){
   typedef struct pokemon {
        int hp;
        char tier;
        char name[10];
    // };
    }pokemon;
    // struct pokemon pikachu;
    pokemon arr[10];
    arr[0].hp=100;
    arr[0].tier='A';
    strcpy(arr[0].name,"pinak");
    arr[1].hp=100;
    arr[1].tier='P';
    strcpy(arr[1].name,"paku");
    arr[2].hp=100;
    arr[2].tier='k';
    strcpy(arr[2].name,"pinku");
    for(int i=0;i<3;i++){
        printf("HP:  %d\n",arr[i].hp);
        printf("TIER:  %c\n",arr[i].tier);
        printf("NAME:  %s\n",arr[i].name);
    }
    return 0;}
    //declaration and accesible