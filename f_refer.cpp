#include<stdio.h>
void swap(int *a ,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
void swap1(int &a,int &b){
    a=a^b;
    b=b^a;
    a=a^b;
}
void swap2(int &a,int &b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
void printTwo(int a,int b){
   printf("a=%d\nb=%d\n",a,b);
}
int main(){
   int a=1,b=2;
   swap(&a,&b);
   printTwo(a,b);
   swap1(a,b);
   printTwo(a,b);
   swap2(a,b);
   printTwo(a,b);
   return 0;
}
