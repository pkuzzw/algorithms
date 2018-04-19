#include<iostream>
using namespace std;
class Rectangle{
    public:
      int w,h;
    void init(int _w, int _h){
      w=_w;
      h=_h;
    }
    int area(){
    return w*h;
    }
    int perimeters(){
    return 2*(w+h);
    }
};
int main(){
    int w,h;
    cout<<"Please Input the width and height"<<endl;
    cin>>w>>h;
    Rectangle r;
    r.init(w,h);
    cout<<"Area="<<r.area()<<"\tPerimeters="<<r.perimeters()<<endl;
    r.w=6;
    cout<<"Area="<<r.area()<<"\tPerimeters="<<r.perimeters()<<endl;
    return 0;
}
