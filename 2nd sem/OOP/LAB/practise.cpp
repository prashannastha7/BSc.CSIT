//Ambiguity

#include<iostream>
using namespace std;

class A{
    public:
    int x;
};

class B: virtual public A{
    int y;
};

class C: virtual public A{
    public:
     int z;
};

class D:public B, public C{
    public:
     int d;
};

int main(){
     D d;
     d.x =10;
     d.d=20;
     d.z=50;
     cout<<d.z;



}
