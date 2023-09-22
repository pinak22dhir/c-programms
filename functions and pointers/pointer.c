#include<stdio.h>//standard input and output file
int main(){
int a=25;
int* x=&a;//address
*x=7;//a is changed-->value
printf("%d \n",a); 
printf("%p \n", &x);
printf("%p \n", x);

}