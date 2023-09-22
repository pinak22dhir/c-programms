#include<stdio.h>
int main(){
  int n;
    printf("enter number: ");
    scanf("%d",&n);
    int nsp=3;
    int nst=1;
for(int i=1;i<=n;i++){
    
     for(int k=1;k<=nsp;k++){//logical part
        printf(" ");
    }
    nsp--;
    for(int j=1;j<=nst;j++){
        printf("*");
    }
    nst++;
    printf("\n");
}
    return 0;
}
//from star period to lasrt hcf question pascal maths without maths 