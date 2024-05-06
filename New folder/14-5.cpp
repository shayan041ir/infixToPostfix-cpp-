#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
    system("cls");
    stack<double> doublstack(5);
    double f = 1.1;
    cout << "pushing element onto doublestack\n";
    while (doublstack.push(f))
    {
        cout << f << " ";
        f += 1.1;
    }
    cout << "\nstack is full cannot push " << f << "poping elements from doublstack\n";
    while (doublstack.pop(f))
    {
        cout << f << " ";
    }
    cout << "stack is emoty. cannit pop\n";

    stack<int> intstack;
    int i = 1;
    cout << "pushing element onto intstack\n";
    while (intstack.push(i))
    {
        cout << i << " ";
        ++i;
    }
    cout << "\nstack is full cannot push " << i << "poping elements from intstack\n";
    while (intstack.pop(i))
    {
        cout << i << " ";
    }
    cout << "stack is emoty. cannit pop\n";
    cin.get();
    return 0;
}
