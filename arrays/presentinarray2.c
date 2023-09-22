#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("enter x");
    scanf("%d", &x);
    bool flag=true;
    // int check=0;
    for(int i=0;i<=7;i++){
        // bool flag=true;}
       if( arr[i]==x) {
        // check=1;
        flag=true; break;}}
      
if (flag==true ) printf(" %d is present in array", x);//check==1
else printf("%d is not present", x) ;

   
    return 0;
}