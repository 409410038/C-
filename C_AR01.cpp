#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
using namespace std;

int main()
{
    int num[100];
    char c;
    int cnt=0;

    while (cin >> num[cnt])
    {
        cnt++;
    }

    for (int i = cnt-1; i >= 0; i--)
    {
        if (i == 0)
            cout << num[i];
        else
           cout << num[i] << " ";
    }

    cout << endl;



}
