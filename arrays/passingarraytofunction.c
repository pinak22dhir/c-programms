#include<stdio.h>
// int fun(int* a){
//     *a=7;
//     return 0;
// } pass by reference
// int fun(int a){
//     a=7;
//     return 0;
// }pass by value
//arrays are only pass by reference automatically
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}

int main(){
    int arr[2]={3,5};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
     printf("%d %d\n",arr[0],arr[1]);

    // fun(a);
    // fun(&a);
    // printf("%d \n",a);
    return 0;
}