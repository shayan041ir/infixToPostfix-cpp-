#include<iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string a;
	cout<<"pls enter a: \n";
	getline(cin,a);
	
	for(int i=0 ; a[i] ; i++)
	{
		char temp=a[i];
		int c=1;
		for(int j = i+1 ; a[j] ; j++)
		{
			if(temp==a[j])
			{
				c++;
				strcpy(&a[j],&a[j+1]);
				j--;
			}
		}
		cout<<"char is "<<temp<<" rp is "<<c<<endl;
		
	}
	
	
	return 0;
}