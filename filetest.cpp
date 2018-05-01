#include<iostream>
#include<fstream>
//#include<string>
#include<cstring>
using namespace std;
class CStudent{
public:
	char szName[20];
	int score;
};
int main(){
	CStudent s;
	fstream iofile("/home/zzw/code/student.data",ios::in|ios::out|ios::binary);
	if(!iofile){
	  cout<<"error"<<endl;
	  return 0;
	}
	iofile.seekp(2*sizeof(s),ios::beg);
	iofile.write("Mike",strlen("Mike")+1);
	iofile.seekg(0,ios::beg);
	while(iofile.read((char *) &s, sizeof(s))){
	  cout<<s.szName<<"  "<<s.score<<endl;
	}
	iofile.close();

	return 0;
}
