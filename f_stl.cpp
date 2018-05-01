#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	vector<int>::const_iterator i;
	for(i=v.begin();i!=v.end();i++)
		cout<<*i<<endl;
  	cout<<"Now Going to Reverse"<<endl;
 	vector<int>::reverse_iterator r;
	for(r=v.rbegin();r!=v.rend();r++)
		cout<<*r<<endl;
	vector<int>::iterator j;
	//for(j=v.begin();j!=v.end();j++)
		//*j=100;
	//for(i=v.begin();i!=v.end();i++)
		//cout<<*i<<endl;
	cout<<"Now test find() alogrithme"<<endl;
	j=find(v.begin(),v.end(),33);
	if(j!=v.end())
		cout<<"Found "<<*j<<endl;
	else
		cout<<"Not Found "<<endl;

	j=find(v.begin(),v.end(),100);
	if(j!=v.end())
		cout<<"Found "<<*j<<endl;
	else
		cout<<"Not Found"<<endl;


	return 0;
}
