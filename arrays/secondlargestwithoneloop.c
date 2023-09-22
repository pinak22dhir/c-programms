#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,3,56,56,8,7};
    int max=INT_MIN;
    int smax=INT_MIN;
    for ( int i=0;i<=6;i++){
        if(arr[i]>max){
        max=arr[i];}
    
    if(arr[i]>smax && arr[i]!=max){    smax=arr[i];}
    // printf("%d",smax);
    
}
 printf("%d",smax);
    
return 0;
}