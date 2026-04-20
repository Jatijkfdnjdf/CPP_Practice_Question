#include <iostream>
using namespace std;
class faculty
{
public:
    void finfo()
    {
        cout << "Faculty name : ";
    }
};
class student
{
public:
    void sinfo()
    {
        cout << "Student name : ";
    }
};
class University:public faculty, public student
{
    
};

int main()
{

    return 0;
}