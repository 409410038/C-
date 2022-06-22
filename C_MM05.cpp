#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double s;
    cout << fixed << setprecision(1);

    cin >> s;
    cout << round(s*s*10)/10 << endl;

}
