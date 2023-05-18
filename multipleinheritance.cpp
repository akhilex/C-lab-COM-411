#include<iostream>
using namespace std;
class A{
    protected:int l,b;
    public: void input(){
        cout<<"Enter the length of rectangle: ";
        cin>>l;
        cout<<"Enter the breadth of rectangle: ";
        cin>>b;
    }
};
class B{
protected: float r;
public:void input1(){
    cout<<"Enter the radius of the circle: ";
    cin>>r;
}
};

class C:public A,public B{
    protected: int a1,a2,p1,p2;
    public:void area(){
    cout<<"Area of rectangle is: "<<l*b<<endl;
    cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
    void perimeter(){
        p1=2*(l+b);
        cout<<"Perimeter of rectangle is: "<<p1<<endl;
        cout<<"Perimeter of circle is: "<<2*3.14*r<<endl;
    }
};
int main(){
C c;
c.input();
c.input1();
c.area();
c.perimeter();
}
