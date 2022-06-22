#include <iostream>
using namespace std;

int main()
{
    int num[6];
    for (int i = 0; i < 6; i++)
        cin >> num[i];

    for (int i = 5; i >= 0; i--)
    {
        cout << num[i];
        if (i == 0)
            cout << endl;
        else
            cout << " ";
    }

}
