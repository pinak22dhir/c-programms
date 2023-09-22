#include<stdio.h>
#include<string.h>
int main(){
    struct book {
        char name[4];
        int nofpages;
        float price;
    // };
    }a;
    //  a.name = "pinak";
    //  a.name[0] = 'P';
    //  a.name[1] = 'i';
    //  a.name[2] = 'n';
    //  a.name[3] = 'a';
    //  a.name[4] = 'k';
    // printf("%s", a.name);
    a.nofpages=90;
    a.price=90.6;
    strcpy(a.name,"pinak");
    // char ch[13]="secret seven";
    // char ch[13];
    // strcpy(ch,"secret seven");
    // printf("%s", ch);
    printf("%s", a.name);


    // ch="secret seven"; you cant initiate in this way
    //  printf("%s",ch);

return 0;}
//pokemon is aclass
//pikachu is a object -- mewton
//hp-->attributes