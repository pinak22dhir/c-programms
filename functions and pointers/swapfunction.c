#include<stdio.h>
//pass by value-> it will not change the value it only makes copy of the value
//pass by reference-->address can store  concept of pointers arise
int swap(int a, int b){
    //aand b are formal 
    //2 and 9 are actualy
     a=a+b;//default parameter
    b=a-b;
    a=a-b;
    return 0;
}
int main(){
    int a,b;
    printf("enter a");
    scanf("%d", &a);
     printf("enter b");
    scanf("%d", &b);
   swap(a,b);//actual parameters
   
    printf("value of a is %d",a);
    printf("value of b is %d",b);
    return 0;
}