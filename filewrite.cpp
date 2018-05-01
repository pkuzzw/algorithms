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
	ofstream outfile("/home/zzw/code/student.data",ios::out|ios::binary);
	while(cin>>s.szName>>s.score){
		if(strcmp(s.szName,"exit") == 0 )
			break;
		outfile.write((char *) &s,sizeof(s));
	}
	outfile.close();
	return 0;
}