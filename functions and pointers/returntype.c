#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("enter firt number");
    scanf("%d",&a);
      printf("enter second number");
    scanf("%d",&b);

    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}