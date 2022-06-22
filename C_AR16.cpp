#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, a[3];
    int award[10] = { 0 };
    long long sum = 0;
    cin >> s >> a[0] >> a[1] >> a[2];
    int n;
    cin >> n;
    //while(n >= 100000);
    while (n)
    {
        string number;
        cin >> number;
        int i, j;
        int flag = 1;
        for (j = 7; j >= 0; j--)
        {
            if (s[j] != number[j])
            {
                flag = 0;
                break;
            }
        }//cout << j << number[j] << endl;
        int m = 7;
        if (j == -1 && flag == 1)
            award[0] ++;

        else
        {

            for (i = 0; i < 3; i++)
            {
                flag = 1;

                for (j = 7; j >= 0; j--)
                {
                    if (a[i][j] != number[j])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (j == -1 && flag == 1)
                    m = 1;
                else if (j <= 4)
                {
                    if (j + 2 < m)
                        m = j + 2;
                }
            }
        }
        award[m] ++;

        n --;
    }
    sum = award[0] * 2000000 + award[1] * 200000 + award[2] * 40000 + award[3] * 10000 + award[4] * 4000 + award[5] * 1000 + award[6] * 200;
    for (int i = 0; i < 7; i++)
    {
        if (i == 6)
            cout << award[i] << endl;
        else
            cout << award[i] << " ";
    }


    cout << sum << endl;
}
