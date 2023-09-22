#include<stdio.h>
#include<conio.h>
int main(){
    int arr[99];
    int sum=0;
    int sum2=4950;
    int difference=0;
    //int sum2=n/(n+1)/2
    for(int i=0;i<=98;i++){
      sum =  sum + i; //arr[i] and i have difference
    //   printf("% d ",sum);
    }
    difference=sum2- sum;

    printf("%d",difference);
    return 0;

}