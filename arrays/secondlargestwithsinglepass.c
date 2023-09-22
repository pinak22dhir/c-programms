#include<stdio.h>
#include<limits.h>
int main(){
    // int arr[7]={1,2,3,4,5,6,7};
    int arr[7]={7,6,5,7,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i=0;i<6;i++){
        if(max<arr[i]){
smax=max;//it is previous maximun=m value 
max=arr[i];}
//max is now anew max;
else if(smax<arr[i] && max !=arr[i]){//you should see another level 
    smax=arr[i];//max>arr[i]
}
        }
    
    printf("%d", smax);
    return 0;
}