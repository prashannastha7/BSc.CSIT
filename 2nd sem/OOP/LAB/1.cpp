#include <iostream>
    using namespace std;
class A
{
public
    :
    virtual void display()=0;
};
class
    B
    : public A
{
public
    :
    // void display()
    // {
    //     cout << "This is class B."<<endl
    //         ;
    // }
};
class
    C
    : public A
{
public
    :
    void display()
    {
        cout << "This is classC."<<endl
            ;
    }
};
int main()
{
//    A a;
   B b;
   C c;
//    a.display();
   //b.display();
   c.display();
    return 0;
}
