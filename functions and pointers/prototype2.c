#include<stdio.h>
int main(){
    void india();
    india();
    return 0;
}
void india(){
    void australia();
    australia();
    printf("you are in india \n");
    return;
}
void australia(){
    printf("you are in australia \n");
    return;
}