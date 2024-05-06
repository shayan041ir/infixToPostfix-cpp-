#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
class account
{
public:
    void deposit(void);
    void credit(int);
    void debite(int);
    int getbalance() { return balance; };
    void create();
    account(int);

private:
    int balance;
    int an;
    string f_name;
    string l_name;
} bank(0);
account::account(int b = 0)
{
    if (b < 0)
        balance = 0;
    else
        balance = b;
}
void account::credit(int a)
{
    balance += a;
}
void account::debite(int a)

{
    if (a > balance)
    {
        cout << "amount of balance cant be negative........";
        system("pause");
    }
    else
        balance -= a;
}
int menu()

{
    int z;
    system("cls");
    cout << "1)creat account" << endl;
    cout << "2)deposit account" << endl;
    cout << "3)withdraw account" << endl;
    cout << "4)display account" << endl;
    cout << "5)Exit account" << endl;
    cout << "\n--------------------\n";
    cout << "please select:";
    cin >> z;
    return z;
}
void account::create()
{
    system("cls");
    ofstream w("Bank.txt", ios::app);
    an = rand();
    cin.get();
    cout << "account number is:" << an << endl;
    w << an << endl;
    cout << "please enter f_name";
    getline(cin, f_name);
    w << f_name << endl;

    cout << "please enter l_name";
    getline(cin, l_name);
    w << l_name << endl;
    cout << "please enter the amount balance";
    cin >> balance;
    w << balance;
    w.close();
}
void account::deposit()
{
    int amount;
    system("cls");
    cout << "please enter account number:  ";
    cin >> amount;
    ifstream r("Bank.txt", );
    ofstream w("Bank2.txt");
    r >> an;
    r >> f_name;
    r >> l_name;
    r >> balance;
    while (!r.eof())
    {
      
    }
}
int main()
{
    int z;
    while (true)
    {
        z = menu();
        switch (z)
        {
        case 1:
            bank.create();
            break;
        case 2:
            bank.deposit();
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "please  try again............" << endl;
            system("pause");
            break;
        }
    }

    return 0;
}
