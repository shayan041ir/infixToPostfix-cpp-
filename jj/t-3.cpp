#include <iostream>
#include <string>
using namespace std;
void input(int[], int);
void selection(int[], int);
void output(int[], int);
int main()
{
    int n;
    int array[100];
    system("cls");
    cout << "pls enter numbers of students :";
    cin >> n;
    input(array, n);
    selection(array, n);
    output(array, n);
    return 0;
}
void output(int array[], int n)
{
    cout << "\nsorted array\n";
    for (int i = 0; i < n; i++)
        cout << array[i] << "\t";
}
void input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = rand()%100;
        cout << array[i] << "\t";
    }
}
void selection(int array[], int n)
{
    int indexmin;
    for (int i = 0; i < n; i++)
    {
        indexmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[indexmin])
                indexmin = j;
        }
        swap(array[indexmin],array[i]);
    }
}