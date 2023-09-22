#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[25];
        int age;
        float salary;
        
    }a,b;
strcpy(a.name,"pinak");
printf("%s \n",a.name);
b.age=90;
printf("%d \n",b.age);
return 0;
}