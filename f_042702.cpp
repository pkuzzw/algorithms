#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define PI  3.1415926
class CShape
{
public:
	// CShape();
	// ~CShape();
	virtual double Area()=0;
	virtual void PrintInfo()=0;
	
};
class Rectangle : public CShape{	
public:
	double width,height;
	virtual double Area(){
		return width*height;

	}
	virtual void PrintInfo(){
		cout<<"Rectangle : "<<Area()<<endl;

	}

};
class Circle : public CShape{	
public:
	double r;
	// virtual double Area(){
	// 	return PI*r*r;

	// }
	// virtual void PrintInfo(){
	// 	cout<<"Circle : "<<this->Area()<<endl;
	// }
	virtual double Area();
	virtual void PrintInfo();
};
double Circle::Area(){
	return PI*r*r;
}
void Circle::PrintInfo(){
	cout<<"Circle : "<<Area()<<endl;
}


class Triangle : public CShape{	
public:
	double a,b,c;
	virtual double Area(){
		double q;
		q=(a+b+c)/2.0;
		return sqrt(q*(q-a)*(q-b)*(q-c));

	}
	virtual void PrintInfo(){
		cout<<"Triangle : "<<" a="<<a<<" b="<<b<<" c="<<c<<" Area="<<Area()<<endl;
	}
};
int MyCompare(const void *elem1, const void *elem2){
	CShape  **p1;
	CShape  **p2;
	double a1,a2;
	p1=(CShape  **)elem1;
	p2=(CShape  **)elem2;
	a1=(*p1)->Area();
	a2=(*p2)->Area();
	if(a1>a2)
		return 1;
	else if(a1<a2)
		return -1;
	else
		return 0;
}
CShape *p[100];
int main(){
	Rectangle *pr;
	Circle *pc;
	Triangle *pt;
	int i,n;
	char type;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>type;
		switch(type){
		case 'R':
			//p[i]=new Rectangle();
			//cin>>p[i]->width>>p[i]->height;
		 	pr=new Rectangle();
		 	cin>>pr->width>>pr->height;
		 	p[i]=pr;
			break;
		case 'C':
			//p[i]=new Circle();
			//cin>>p[i]->r;
			pc=new Circle();
			cin>>pc->r;
			p[i]=pc;
			break;
		case 'T':
			// p[i]=new Triangle();
			// cin>>p[i]->a<<p[i]->b>>p[i]->c;
			pt=new Triangle();
			cin>>pt->a>>pt->b>>pt->c;
			p[i]=pt;
			break;
		// default:
		// 	cout<<"Wrong Input "<<endl;
		//     break;
		}
	}
	cout<<"Input finished"<<endl;
	for (i = 0; i < n; ++i)
	{
		p[i]->PrintInfo();
	}
	cout<<"Input finished"<<endl;
	qsort(p,n,sizeof(CShape *),MyCompare);
	for (i = 0; i < n; ++i)
	{
		p[i]->PrintInfo();
	}
	return 0;
}