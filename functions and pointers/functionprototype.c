#include<stdio.h>
// function prototype is for you  can use function any time and 
// call it irrespective of the fact you have to declar it on upper lvel
// void fun(){
//     printf("hello");
//     return;
// }
int main(){
void fun();
fun();
// ->2 steps if you declare on lower side

return 0;
}
void fun(){
    printf("hello");
    return;
}