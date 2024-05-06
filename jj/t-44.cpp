#include <iostream>
#include <conio.h>
using namespace std;
void input(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 100;
        cout << x[i] << "\t";
    }
}
void bubble(int x[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (x[j] > x[j + 1])
                swap(x[j], x[j + 1]);
        }
    }
}
void merg(int a[], int b[], int c[], int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i<n) 
        c[k++]=a[i++];
    while (j<n) 
        c[k++]=b[j++];
    
    
}
void output(int x[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<"\t";
    }
    
}
int main()
{
    const int size = 5;
    int a[size], b[size], c[size * 2];
    system("cls");
    cout << "\n-------- input A ------------\n";
    input(a, size);
    cout << "\n-------- input B ------------\n";
    input(b, size);
    bubble(a, size);
    bubble(b, size);
    merg(a, b, c, size);
    cout << "\n-------- C ------------\n";
    output(c,2*size);
    cout<<endl;
    return 0;
}