#include<iostream>
using namespace std;

class test1
{
public:
    void display()
    {
        cout<<"Test : ";
    }
};

class test2:public test1{};

int main()
{

return 0;
}