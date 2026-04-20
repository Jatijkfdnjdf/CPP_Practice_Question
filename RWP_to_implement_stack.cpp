//  Real world problem to implement stack and inheritance

#include <iostream>
using namespace std;

class stack
{
protected:
    int arr[100];
    int top;

    stack()
    {
        top = -1;
    }
    void push(int val)
    {
        if (top == 99)
        {
            cout << "stack is full" << endl;
            return;
        }
        arr[++top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }
    void display()
    {
        for (int i = top; i <= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};

class browserstack : public stack
{
public:
    void visit_page(int val)
    {
        push(val);
    }
};

class securebrowserstack : public browserstack
{
public:
    void securevisit(int page)
    {
        visit_page(page);
    }
};

class undostack : public stack
{
public:
    void undo()
    {
        pop();
    }
};

class redostack : public stack
{
public:
    void redo()
    {
        pop();
    }
};

class editor_stack : public undostack, public redostack
{

};

//  