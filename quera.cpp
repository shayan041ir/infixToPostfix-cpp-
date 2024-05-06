#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n = 4, s;
    char pos;
    int m[n][n] = {{1, 0, 1, 0},
                   {0, 1, 1, 0},
                   {0, 0, 1, 0},
                   {0, 0, 0, 1}};

    for (int i = 0; i < n;)
    {
        for (int j = 0; j < n;)
        {
            cout << "\nplease select position:\n(q/w/e/a/s/d/z/x/c)";
            cin >> pos;

            switch (pos)
            {
            case 'q':
                m[i][j + 5] = (j + 5);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                    m[i][j]=m[i][j];
                }
                break;
            case 'w':
                m[i][j] = (j - 4);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                }
                break;
            case 'e':
                m[i][j] = (j - 3);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                }
                break;
            case 'a':
                m[i][j] = (j - 1);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                }
                break;
            case 'd':
                m[i][j] = (j + 1);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                    m[i][j]=m[i][j];
                }
                break;
            case 'z':
                m[i][j] = (j + 3);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                }
                break;
            case 'x':
                m[i][j] = (j + 4);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                }
                break;
            case 'c':
                m[i][j] = (j + 5);
                if (m[i][j] == 1)
                {
                    cout << "is one";
                    s = m[i][j];
                    if (s == m[4][4])
                    {
                        cout << "finish";
                        break;
                    }
                }
                else
                {
                    cout << "is zero";
                }
                break;

            default:
                cout << "\tw\na\t\td\n\tx\n";
                break;
                exit(0);
            }
        }
    }
}

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout << "\t" << m[i][j];
//         cont++;
//         if (cont == 4)
//         {
//             cout<<endl;
//             cont = 0;
//         }

//     }
// }

//   |||| also we can do this ||||
//   vvvv                     vvvv

// int getOperator(char op) {
//     if(op == '+' || op == '-') {
//         return 1;
//     }
//     else if(op == '*' || op == '/') {
//         return 2;
//     }
//     return 0;
// }

// string infixToPostfix(string expression) {
//     stack<char> operators;
//     string postfix = "";

//     for(int i = 0; i < expression[i]; i++) {
//         if(isalnum(expression[i])) {            //برای برسی اینکه ایا حرف یا عدد است
//             postfix += expression[i];
//         }
//         else if(expression[i] == '(') {
//             operators.push(expression[i]);
//         }
//         else if(expression[i] == ')') {
//             while(!operators.empty() && operators.top() != '(') {
//                 postfix += operators.top();
//                 operators.pop();
//             }
//             operators.pop();
//         }
//         else {
//             while(!operators.empty() && getOperator(expression[i]) <= getOperator(operators.top())) {
//                 postfix += operators.top();
//                 operators.pop();
//             }
//             operators.push(expression[i]);
//         }
//     }

//     while(!operators.empty()) {
//         postfix += operators.top();
//         operators.pop();
//     }

//     return postfix;
// }
