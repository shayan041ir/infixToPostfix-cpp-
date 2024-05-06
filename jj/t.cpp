#include <iostream>
#include<cstring>
#include<string>
#include <algorithm>
using namespace std;
void addStrings(string num1, string num2)
{
    char res[20]="";
    int n = num1.size();
    int m = num2.size();
    int carry = 0;
    int j,k=0;
    for (int i = n - 1, j = m - 1; i >= 0 || j >= 0; i--, j--)
    {
        int a = (num1[i]- '0');
        int b = (num2[j]- 48);
        int sum = carry + a + b;
        int u = sum % 10;
        char aChar = '0' + u;
        res[k++] = aChar;
        carry = sum / 10;
		cout << a << "+" << b << "="<<u<<"and carry is:"<<carry<<endl;
    }
    res[k++] =carry+'0';
        strrev(res);

    cout << "res is " <<res<< endl;
}

int main()
{
    addStrings("989", "476");
}