#include<stdio.h>
int main(){
  int n;
    printf("enter number: ");
    scanf("%d",&n);
    // int nsp=3;
    // int nst=1;
for(int i=1;i<=n;i++){
    
     for(int k=1;k<=n-i;k++){//logical part
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}