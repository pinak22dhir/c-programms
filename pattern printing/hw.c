// 1
// A B
//1 2 3
// ABCD 
// 12345
//******
//*    * 
//*    *
//*    *
//******
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||j==1||i==n||j==n)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
 #include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;

        for(int j=1;j<=i;j++){
            if(i%2!=0){
printf("%d ",a);
a++;  }
else{
    printf("%c ",a+64);
    a++;
}
// printf("\n");
        }
   printf("\n");    
    }
    printf("\n");
    return 0;
}
