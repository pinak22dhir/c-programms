#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,5,7};
    int product=1;
    for (int i=0;i<7;i++){
        
product=arr[i]*product;
        
    }
    printf("%d", product);
    return 0;

}