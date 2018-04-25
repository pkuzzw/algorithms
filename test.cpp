#include<iostream>
using namespace std;
int main(){
    int n=8;
    int & r1=n;
    const int r2=r1;
    r1=9;
    cout<<"n="<<n<<endl
	<<"r1="<<r1<<endl
	<<"r2="<<r2<<endl;
    return 0;


}
