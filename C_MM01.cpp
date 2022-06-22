#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double u, l, h;
    cout << fixed << setprecision(1);
    while ((cin >> u >> l >> h))
    {
        cout << "Trapezoid area:" << ((u + l) * h) / 2 << endl;
    }

}
