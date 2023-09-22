// arr[0][0]  arr[0][1]
// arr[1][0]  arr[1][1]
// arr[2][0]   arr[2][1]  int arr[3][2]
#include<stdio.h>
int main(){

 int  arr[3][3]={{1,2,3},{3,4,5},{4,5,6}};
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}