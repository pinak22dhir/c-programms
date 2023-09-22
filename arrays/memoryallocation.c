// int stores 4 bytes 
// if there is arr[4] each element stores 4 bytes 
// 1 byte=8 bits
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%p \n",&arr[0]);
    printf("%p \n",&arr[1]);
    printf("%p \n",&arr[2]);
    printf("%p \n",&arr[3]);
    printf("%p \n",&arr[4]);
 //0123456789abcdef   
}