// library function are those functions which are already present in 
// some header file you can acces it by header file
#include<stdio.h>
#include<math.h>
int main(){
    int a;
      printf("enter firt number");
    scanf("%d \n",&a);
   float root=sqrt(a);
    printf(" the square root is %f \n",root);
    int q=pow(2,3);
printf("%d \n",q);
    return 0;
}