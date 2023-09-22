#include<stdio.h>
int main(){
    int arr[5]={1,9,8,4,5};
    int x=4;
    int count=0;
   for(int i=0;i<5;i++){
    // int count=0;
    if (arr[i]>x){
        // printf("%d", arr[i]);
        count++;
    }
    // printf("%d",count);
   }
    printf("%d",count);
   return 0;
}