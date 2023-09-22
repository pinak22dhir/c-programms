
//pass by reference
#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;//temp=2
    *y=temp;//a==9
    return;
    //return *y=2-->b =2
}
int main(){
    int a=2;
    int b=9;
    swap(&a,&b);//address & store
    printf("the value of a is %d\n",a);
     printf("the value of b is %d\n",b);
     return 0;

}