#include<iostream>
#include"string.h"
using namespace std;
class String{
    private:
	char *str;
    public:
	String(): str(NULL){};
	String(char *);
	const char * c_str(){return str;}
	char *operator=(const char *s);
	~String();
};
String::String(char *s){
	if(str) delete[]str;
	if(s){
	    str=new char[strlen(s)+1];
	    strcpy(str,s);
	}
	else 
	    str=NULL;
}
char * String::operator=(const char *s){
	if(str) delete []str;
	if(s){
	    str=new char[strlen(s)+1];
	    strcpy(str,s);
	}
	else
	    str=NULL;
	return str;
}
String::~String(){
  if(str) delete []str;
}
int main()
{
  String obj;
  obj="Hello";
  cout<<obj.c_str()<<endl;
  char *p=(char *)obj.c_str();
  String s=p;
  cout<<s.c_str()<<endl;
  return 0;
}
