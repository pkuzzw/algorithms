#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	freopen("zzw.txt","w",stdout);
	if(y==0)
	    cerr<<"error."<<endl;
	else
	    cout<< x/y;
	freopen("zzw.txt","r",stdin);
	int n;
	cin>>n;
	freopen("/dev/tty","w",stdout);
	cout<<"n= "<<n<<endl;
	return 0;
}
