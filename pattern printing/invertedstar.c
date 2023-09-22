#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int a;
    a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            //same as i=1;i<=n;i++
            // printf("%d " , j); }
            printf("*");
            // a--; only 2 stars git pressed
            }
               a--;//logically
            //dekjho row chanfge hai ya column change 
            printf("\n");
            }
            // printf("\n");
    return 0;
}