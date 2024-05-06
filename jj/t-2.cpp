#include <iostream>

using namespace std;
bool prime(int);
bool check(int[], int, int);
int main()
{
    int arr[100];
    int n, j = 0;
    system("cls");
    cout << "please enter n: " << endl;
    cin >> n;
    for (int k = 2; k < n; k++)
    {
        for (int i = 2; i < k; i++)
        {
            if (prime(i))
                arr[j++] = i;
        }
        if (check(arr, k, j))
            cout << k << " is prime " << endl;
    }
    return 0;
}
bool prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool check(int arr[], int n, int j)
{
    for (int i = 0; i < j; i++)
    {
        if (n % arr[i] == 0)
            return false;
    }
    return true;
}