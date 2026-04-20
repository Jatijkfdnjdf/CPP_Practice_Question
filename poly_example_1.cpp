#include <iostream>
using namespace std;

class test
{
    int x = 10;
    double y = 10.1;

public:
    void diplay()
    {
        cout << "Base class display" << endl;
    }
};

class derived : public test
{
public:
    void display()
    {
        cout << "Derived class display" << endl;
    }
};

int main()
{
    test *ptr;
    derived d;

    ptr = &d;

    d.display();
    ptr->diplay();
    return 0;
}
