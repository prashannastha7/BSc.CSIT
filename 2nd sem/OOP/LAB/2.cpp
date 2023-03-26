#include <iostream>
using namespace std;

class addClass
{
private:
    int x;

public:
    addClass() { x = 0; }

    addClass(int a)  //a(3,4) vako vaya addClass(int a, int b )hunthiyo
    {
        x = a;
    }

    void add(addClass a, addClass b)
    {
        x = a.x + b.x;
    }

    int display()
    {
        return x;
    }
};

int main()
{
    addClass a(3), b(4), c;
    cout << a.display() << endl;
    cout << b.display() << endl;
    c.add(a, b);
    cout << c.display();
    return 0;
}