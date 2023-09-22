#include<stdio.h>
int main(){
    int x=10;
    int arr[5]={5,7,3,2,8};
    int totalpairs=0;
    // arr={5,5,3,2,8}; zsame jgh initiate or declare kro
    for(int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){//technique
        if (arr[i] +arr[j]==x){
    // printf("%d %d", arr[i],arr[j]);}
   
    //  printf("(%d %d) ", arr[i],arr[j]);
    // totalpairs++;
    printf("(%d, %d) \n", arr[i],arr[j]);
totalpairs++;
//  printf("(%d, %d) \n", arr[i],arr[j]);
        }//loop nhi lgayi
        }
    }
    printf("%d",totalpairs);
    return 0;
}