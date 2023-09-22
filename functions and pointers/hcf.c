
//hcf
//pascaltriangle withoutmaths questions-->dsa wale se
#include<stdio.h>
int min(int a,int b){
    if (a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
for(int i=1;i<=min(a,b);i++)

// for (int i=min(a,b);i>=1;i--)
{
if (a % i ==0 && b %i== 0){
    hcf=i;
}
}
return hcf;
}
int main(){
    int a,b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b );
    int hcf=gcd(a,b);
    printf("%d", hcf);
    return 0;
}
//each function may contain more than one return statements but only one hits
//each return statement in a function may return a different value
//same names--> different function if parameter is different
//not nessary for function  to return a value