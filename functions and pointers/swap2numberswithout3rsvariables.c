#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d", &a);
     printf("enter b");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" value of a is %d",a);
    printf(" value of b is %d",b);
    return 0;
}