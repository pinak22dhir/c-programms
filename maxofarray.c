#include<stdio.h>
#include<limits.h>
int main(){
    int arr[2][2];
  
   int max=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
         scanf("%d", &arr[i][j]);    
        }
      
    }
    int i,j;
   for( i=0;i<2;i++){
        for( j=0;j<2;j++){
           if(arr[i][j]>max)
           max=arr[i][j]; printf("\n");         
    }
    //  printf("%d", max);
    }
     printf("%d at ", max,(i,j));
    return 0;
}