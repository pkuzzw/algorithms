#include<iostream>
using namespace std;
class A{
   private:
     int n;
   public:
   A(){
    n=11;
   }
   A(int _n){
    n=_n;
   }
   ~A(){
     cout<<"n="<<n<<"\tdeconstructor function called"<<endl;
   }

};
int main(){
   A *p=new A[12];
   A *p2=new A;
   A a(2);
   delete []p;
   return 0;
}
