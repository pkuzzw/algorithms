#include<iostream>
using namespace std;
void Prshuzu(int *s,int element){
     for(int i=0;i<element;i++)
     cout<<s[i]<<"->";
     cout<<endl;
}
void Move(int *a,int start, int num,int k){
    //move the s to the right about k numbers
    int i,tmp;
    tmp=a[start];
    i=num-k+start;
    while(i!=start){
      if((i+k)>=num) a[(i+k)%num]=a[i];
      else a[i+k]=a[i];
      if((i-k)<0) i=i-k+num;
      else i=i-k;
    }
    a[start+k]=tmp;
    //a[k]=tmp;
}
int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int n=10;
    int k,pos;
    Prshuzu(a,n);
    cout<<"Input the k numbers:"<<endl;
    cin>>k;
    pos=k%n;
    if(pos==0);
    else{
        while(pos--!=0){
        int tmp=a[n-1];
        for(int i=n-1;i>0;i--)
           a[i]=a[i-1];
        a[0]=tmp;
	}
    }
    Prshuzu(a,n);
    return 0;
}
