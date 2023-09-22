#include<stdio.h>
int main(){
    int r,c;
int arr[r][c];
 
    
    printf("enter the rows: ");
    scanf("%d", &r);
     printf("enter the column: ");
    scanf("%d", &c);
    
    for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d", &arr[i][j]);
} }
 for(int i=0;i<r;i++){
    int count=0;
for(int j=0;j<c;j++){
printf("%d ",arr[i][j]);
if(arr[i][j]==1){
count++;
}}
printf("%d",count);
printf("\n");
    }
    return 0;}