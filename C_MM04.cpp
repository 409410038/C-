#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    if (a < 0 && a % b < 0)
        cout << a << "/" << b << "=" << a / b - 1 << "..." << a - b * (a / b - 1) << endl;
    else
        cout << a << "/" << b << "=" << a / b << "..." << a % b << endl;
}
