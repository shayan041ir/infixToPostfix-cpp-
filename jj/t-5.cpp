#include <iostream>
#include <string>
using namespace std;
void input(string s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Please Enter a string: ";
        getline(cin, s[i]);
    }
}

void bubble(string s[], int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (s[j] > s[j + 1])
                swap(s[j], s[j + 1]);
}
void output(string s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<"\t";
    }
    
}
int main()
{
    const int n = 5;
    string s[n];
    system("cls");
    input(s, n);
    bubble(s, n);
    output(s, n);
    return 0;
}
