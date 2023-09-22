#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,4};
    for(int i=0;i<=4;i++){
for(int j=i+1;j<=4;j++){
    if (arr[i]==arr[j])//not i/j 
    {

printf(" %d is the duplicate element", arr[i]);//should write arr[i] innstead of i
break;
    }
}
    }
    return 0;
}