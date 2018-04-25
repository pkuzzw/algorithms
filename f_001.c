#include<stdio.h>
#include<stdlib.h>
int Compare(const void *elem1,const void *elem2){
	unsigned int *p1,*p2;
	p1=(unsigned int *)elem1;
	p2=(unsigned int *)elem2;
	return (*p1 % 10 - *p2 % 10);
}
int main(){
	int a[12]={12,34,27,23,56,65,12,89,98,78,19,0};
	for(int i=0;i<12;i++)
		printf("%d->",a[i]);
	printf("\n");
	qsort(a,12,sizeof(int),Compare);
	for(int i=0;i<12;i++)
		printf("%d->",a[i]);
	printf("\n");
	return 0;
}
