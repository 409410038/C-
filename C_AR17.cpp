#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string x1;
    string x2;
    int cnt = 0;
    cin >> x1;
    int b1, b2;
    long long num = 0;
    cin >> b1 >> b2;
    if (b1 < 2 || b1 > 16 || b2 < 2 || b2 > 16)
    {
        cout << "Input Error" << endl;
        exit(0);
    }
    for (int i = 0; i < x1.length(); i++)
    {
        if (b1 <= 10)
        {
            if (!isdigit(x1[i]) || x1[i] - '0' >= b1)
            {
                cout << "Input Error" << endl;
                exit(0);
            }

        }
        else
        {
            if (!isdigit(x1[i]) && (x1[i] - 'A' + 10 >= b1))
            {
                cout << "Input Error" << endl;
                exit(0);
            }
        }

    }
    for (int i = 0; i < x1.length(); i++)
    {
        num *= b1;
        if (isdigit(x1[i]))
            num += x1[i] - '0';
        else if (isalpha(x1[i]))
            num += x1[i] - 'A' + 10;

    }
    if (num % b2 > 9)
        x2[cnt++] = num % b2 + 'A' - 10;
    else
        x2[cnt++] = num % b2 + '0';

    while (num / b2 != 0)
    {
        num = (int)num / b2;

        if (num % b2 > 9)
            x2[cnt++] = num % b2 + 'A' - 10;
        else
            x2[cnt++] = num % b2 + '0';
    }
    for (int i =  cnt - 1; i >= 0; i --)
    {
        cout << x2[i];
    }
    cout << endl;

}
