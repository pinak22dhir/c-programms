#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
fact=fact*i;}

return fact;

}
int combination(int i,int j){
    int ncr=factorial(i)/factorial(j)*factorial(i-j);
    return ncr;
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
       
        for(int j=0;j<=i;j++){
        int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
}