#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    // int a=1; yeh wala nhi hoga 13
    //1 5
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            // a=a+2;//uppar nhi hoga
        //     printf("%c ", a);
        // a++;
        int d=a+64;
        char ch=(char)d;

         printf("%c ", a+64);
        a++;
        }
       
        printf("\n");
    }
    return 0;
}