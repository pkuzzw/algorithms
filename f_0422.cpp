#include<iostream>
using namespace std;
class A{
   private:
      	int i;
      	int  j;
      	static int num;
	static int area;
   public:
        A(int _i,int _j=0){
	  cout<<"Constructor funciton called"<<endl;
          i=_i;
	  j=_j;
          num++;
	  area +=_i*_j;
  	}
 	~A(){
 	  cout<<"deconstructor function called"<<endl;
	  num--;
	  area -=i*j;
	}
 	static void  Pr(){
  	  cout<<"Number="<<num<<endl;
 	  cout<<"Area="<<area<<endl;
	}
       
	
};
class D{
   private:
	int i;
   public:
	void Hello(){cout<<i<<"Hello"<<endl;}
};

int A::num=0;
int A::area=0;

int main(){
    A  a(1,2);
    A  b(3,4);
    //A  c;
    A  *p;
    a.Pr();
    p->Pr();   
    A  &ref=a;
    ref.Pr();
    cout<<"------------"<<endl;
    A::Pr();
    D  *q=NULL;
    q->Hello();
    return 0;
}
