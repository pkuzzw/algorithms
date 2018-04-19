#include<stdlib.h>
#include<stdio.h>
#define NUM 8
int MyCompare(const void *elem1, const void *elem2){
	unsigned int *p1,*p2;
	p1=(unsigned int*)elem1;
	p2=(unsigned int*)elem2;
        return (*p1 %10)-(*p2)%10;
}//endMyCompare
void main(){
    unsigned int A[NUM]={1,234,23,45,32,31,87,98};
    qsort(A,NUM,sizeof(unsigned int),MyCompare);
    int i=0;
    for(;i<NUM;i++){
	printf("%d->",A[i]);
    }
    printf("\n");
}
