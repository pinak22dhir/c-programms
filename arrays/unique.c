#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={1,2,3,4,4};
    int i,j;
    
    for( i=0;i<=4;i++){
        bool flag=true;
for( j=i+1;j<=4;j++){
    if (arr[i]!=arr[j])//not i/j 
    {

flag =false;
    }
}
if (flag==false){ printf(" %d is unique array \n",arr[i]); };

    }
    
    
    return 0;
}