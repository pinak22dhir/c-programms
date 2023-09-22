#include<stdio.h>
int main(){
//     roll no marks1 marks2  marks3
// name1
//name 2
//name3
//name4


int arr[4][2];
for (int i=0;i<4;i++){
for(int j=0;j<2;j++){
    
scanf ("%d", &arr[i][j]);

} 
printf("\n");   
}
for (int i=0;i<4;i++){
for(int j=0;j<2;j++){
     printf("enter roll no, marks %d at %d ", i , j);
printf("%d ", arr[i][j]);
}  
printf("\n");  
}


    return 0;
}