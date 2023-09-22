#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("enter x");
    scanf("%d", &x);
    for(int i=0;i<=7;i++){
        if (x==arr[i]){
            printf("%d present at the index %d", x,i);

        }
        else {
            printf("not present");
            break;
        }
    }
    return 0;
}