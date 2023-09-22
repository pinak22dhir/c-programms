#include<stdio.h>
typedef int* pointer;
int main(){
   int x=5,y=7;
//   int*x,y; ek pointer aur doosri vlue 
// int* a=&x,b=&y;
// int* a=&x,b=y;
pointer a=&x,b=&y;


// int* a=&x;
// int* b=&y;
printf("%p\n",a);
printf("%p\n",b);


}