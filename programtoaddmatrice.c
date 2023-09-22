#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int brr[2][2]={{7,8},{6,8}};
    int rss[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             rss[i][j]=arr[i][j]+ brr[i][j];
        }
      
    }
   for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           printf("%d ", rss[i][j]);//dont do 2,2 just do i,j
             }
               printf("\n");
    }
    return 0;
}