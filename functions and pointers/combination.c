#include<stdio.h>
//parameter sum(int a,int b)
//argument sum(1,2)
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
fact=fact*i;}
// printf("%d \n",fact); wrong loop
return fact;
//reeturn 0;
}
    
int main(){
    int n,r;
    printf("enter number n: ");
    scanf("%d", &n);
     printf("enter r: ");
    scanf("%d", &r);
   int nfact=factorial(n);
   int rfact=factorial(r);
   int nminusr=factorial(n-r);
int combination;
    combination=nfact/(rfact * nminusr);
  printf("%d",combination);
  // int a=factorial(7);
  // printf("%d",a);
return 0;

}