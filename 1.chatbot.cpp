#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    int input;
    int option1;
    int option2;
    int option3;
    int option4;
    int option5;
    int option6;
    cout<<"Hey I am your ChatBot"<<endl;
    cout<<"Which tab you want me to open for you"<<endl;
    cout << "Option 1 : Youtube" << endl;
    cout << "Option 2 : Google" << endl;
    cout << "Option 3 : Netflix" << endl;
    cout << "Option 4 : Valorant" << endl;
    cout << "Choose option ";
    cin >> input;
    if (input == 1)
    {
        cout << "What do you want to see !" << endl;
        cout << "Option 1 : Gaming" << endl;
        cout << "Option 2 : StandUp" << endl;
        cout << "Option 3 : DSA" << endl;
        cout << "Option 4 : Food vlogger" << endl;
        cin >> option1;
        if (option1 == 1)
        {
            cout << "Congrats! Soul win the BGIS 2026" << endl;
        }
        else if (option1 == 2)
        {
            cout << "Kaustabh aggarwal abhi bhi mota hi h" << endl;
        }
        else if (option1 == 3)
        {
            cout << "Tumse na ho payega" << endl;
        }
        else
        {
            cout << "Patla hoja mote" << endl;
        }
    }
}