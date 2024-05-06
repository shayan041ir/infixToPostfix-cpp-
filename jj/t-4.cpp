#include <iostream>
using namespace std;
void input(int[], int);
void bubbleSort(int[], int);
void merg(int[], int[], int[], int);
void output(int[], int);
int main()
{
    const int size = 5;
    int a[size], b[size], c[2 * size];
    system("cls");
    cout << "\n------------------------------input A---------------" << endl;
    input(a, size);
    cout << "\n------------------------------input B---------------" << endl;

    input(b, size);
    bubbleSort(a, size);
    bubbleSort(b, size);
    merg(a, b, c, size);
        cout << "\n------------------output is ---------------" << endl;
    output(c, 2 * size);
    return 0;
}
void merg(int a[], int b[], int c[], int n)
{
    int i = 0, k = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
}
void output(int a[], int n)
{
    cout << "\n-----------------------\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}
void bubbleSort(int a[], int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}
void input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "\t";
    }
}