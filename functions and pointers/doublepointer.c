#include<stdio.h>
int main(){
    int a=56;
    int* x=&a;//pointer mein toh address save hoga
    //int* int ka adreess store krta hai
    //int** -int* ka store address store karta hai
    // %p se address print hta hai
    int** y=&x;
    int*** z=&y;
     printf("%d\n",a);
    printf("%d\n",*x);
     printf("%d\n",**y);
      printf("%d\n",***z);
      
      return 0;
}