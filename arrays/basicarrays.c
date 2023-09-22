#include<stdio.h>
int main(){
    int arr[5]={2,4,5,6,8};
    arr[4]=100;
    float arr2[5]={2,4,5,6,8};
    arr2[4]=50;//accessing and update
    char arr1[5]={'a','b','c','d','e'};
    arr1[4]='c';
    printf("%c  ",arr1[4]);
     printf("%f  ",arr2[4]);
   
    // printf("%d",arr[-2]); garbage value
    return 0;
}