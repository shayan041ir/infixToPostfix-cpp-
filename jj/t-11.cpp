#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string st;
	int c = 0, i;
	system("cls");
	cout << "please enter a string:";
	getline(cin, st);
	for (i = 0; st[i]; i++)
	{
		if (st[i] != ' ')
			c++;
		else
		{
			if (c == 4)
				st.replace(i - 4, 4, "love");
			c = 0;
		}
	}
	cout << st << endl;
	system("pause");
	return 0;
}