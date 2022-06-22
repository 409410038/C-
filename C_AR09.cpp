#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int num[10];
    int cnt = 0;
    char c;
    int maxmum = 0, minimum = 0;
    while ((c = cin.get()) != EOF)
    {
        if (c == '\n')
            break;

        if (isdigit(c))
        {
            num[cnt++] = c - '0';
        }
    }
    sort(num, num+cnt);
    for (int i = 0; i < cnt; i++)
    {
        maxmum += num[i]*pow(10, i);
        minimum += num[cnt-1-i]*pow(10, i);
    }

    cout << maxmum - minimum << endl;


}
