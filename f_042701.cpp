#include<iostream>
using namespace std;
class A{
	int n;
public:
	A(){
		cout<<"A constructed function called"<<endl;
	}
	virtual void Pr(){
		cout<<"class A Print"<<endl;
	}
	~A(){
		cout<<"A Deconstructed function called"<<endl;
	}

};
class B: public A{
public:
	B(){
		cout<<"B constructed function called"<<endl;
	}
	virtual void Pr(){
		cout<<"class B Print"<<endl;
	}
	~B(){
		cout<<"B Deconstructed function called"<<endl;
	}
	
};
class C: public A{
public:
	C(){
		cout<<"C constructed function called"<<endl;
	}
	virtual void Pr(){
		cout<<"class C Print"<<endl;
	}
	~C(){
		cout<<"C Deconstructed function called"<<endl;
	}

};
class D: public B{
public:
	D(){
		cout<<"D constructed function called"<<endl;
	}
	virtual void Pr(){
		cout<<"class D Print"<<endl;
	}
	~D(){
		cout<<"D Deconstructed function called"<<endl;
	}

};
int main(){
	A a;
	A *pa = &a;
	B b;
	B *pb = &b;
	C c;
	C *pc = &c;
	D d;
	D *pd = &d;
	pa->Pr();
	pa=pb;
	pa->Pr();
	pa=pc;
	pa->Pr();
	pa=pd;
	pa->Pr();
	return 0;
}
