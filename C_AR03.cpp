#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        sum += num*num*num;
    }


    cout << sum << endl;

}
