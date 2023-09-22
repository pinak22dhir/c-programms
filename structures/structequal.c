#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct  date{
      int date;
      int month;  
    }date;
    date a,b;
    a.date=22;
    a.month=10;
    b.date=22;
    b.month=12;
    // date c;
    // c=a;
  date c;
  c=a;
//   if(a==c)printf("equal")
    // if(a == b){
    //     printf("equal");
    // } you cant deal it like that 
    // if(a.date=b.date && a.month==b.month){
    //     printf("equal");
    // }
    // else printf("unequal");
    c.month=8;
    bool flag= true;
    
    if(a.date!=c.date) flag=false;
    if(a.month!=c.month) flag=false;
    if( flag==true) printf("equal");
    else printf("unequal");
return 0;
}