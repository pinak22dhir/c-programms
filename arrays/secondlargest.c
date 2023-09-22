#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,3,7,5,6,3};
    int smax=INT_MIN;
    int max=INT_MIN;
    //it is happening in 2 loops we want itin one loop  to compress it to one loop
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
            // printf("%d", max);
        }
    }
    for(int j=0;j<7;j++ ){
        if(smax<arr[j] && max != arr[j]){
            smax= arr[j];
        }
    }
     printf("%d", smax);
    return 0;
}