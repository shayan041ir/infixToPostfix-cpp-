#include <iostream>
using namespace std;
class complex
{
public:
    void input();
    complex() { r = 0, im = 0; };
    friend void sum(complex, complex);
    friend void multi(complex, complex);

private:
    int r, im;
};
void complex::input()
{
    // system("cls");
    cout << "please enter real complex;";
    cin >> r;
    cout << "please enter imaginary complex;";
    cin >> im;
}
int menu()
{
    int n;
    system("cls");
    cout << "1)input............." << endl;
    cout << "2)Plus.............." << endl;
    cout << "3)Multiplied ......." << endl;
    cout << "4)Divided by........" << endl;
    cout << "5)Minus ............" << endl;
    cout << "6)Exit ............." << endl;
    cout << "--------------------" << endl;
    cout << "please select:";
    cin >> n;
    return n;
}

int main()
{
    int z;
    complex obj_1, obj_2, obj_3;
    while (true)
    {
        z = menu();
        switch (z)
        {
        case 1:
            cout << "Please enter object_1:" << endl;
            obj_1.input();
            cout << "Please enter object_2:" << endl;
            obj_2.input();
            system("pause");
            break;

        case 2:
            sum(obj_1, obj_2);
            break;

        case 3:
            multi(obj_1, obj_2);
            break;

        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}
void sum(complex ob_1, complex ob_2)
{
    cout << ob_1.r + ob_2.r << " + " << ob_1.im + ob_2.im << "i" << endl;
    system("pause");
}
void multi(complex ob_1, complex ob_2)
{
    cout << (ob_1.r * ob_2.r) - (ob_1.im * ob_2.im) << " + " << (ob_1.r * ob_2.im) + (ob_2.r * ob_1.im) << "i" << endl;
    system("pause");
}