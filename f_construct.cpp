#include<iostream>
using namespace std;
class Complex{
   private:
       double real,imag;
   public:
       Complex(double _real, double _image = 0);
       void pr();
       Complex(Complex c1,Complex c2);
       Complex(const Complex & c1);
};
Complex::Complex(double _real, double _image ){
     real=_real;
     imag=_image;
}
Complex::Complex(Complex c1,Complex c2){
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
Complex::Complex(const Complex &c1){
    real=c1.real;
    imag=c1.imag;
    cout<<"Copy Constructor Called"<<endl;

}
void Complex::pr(){
     cout<<"real="<<real<<"\timage="<<imag<<endl;
}
int main(){
    Complex a(2.0,1.0);

    a.pr();    
    Complex b(3);
    b.pr();

    Complex *p=new Complex(1);
    p->pr();
    Complex c(a,b);
    c.pr();
    Complex d(c);
    d.pr();
    return 0;
}
