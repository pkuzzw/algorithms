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
	ifstream infile("/home/zzw/code/student.data",ios::in|ios::binary);
	if(!infile){
	  cout<<"error"<<endl;
	  return 0;
	}
	while(infile.read((char *) &s,sizeof(s))){
	  int nReadBytes=infile.gcount();
	  cout<<"Read "<<nReadBytes<<" Bytes"<<endl;
	  cout<<s.szName<<"  "<<s.score<<endl;
	}
	infile.close();
	return 0;
}
