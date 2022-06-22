#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    int mxlen[1000] = { 0 };
    string s1, s2;
    cin >> m >> n;
    cin >> s1 >> s2;

    for (int i = 0; i < min(m ,n); i++)
    {
        for (int j = 0; j < m; j++)
        {
            int M = 0;
            for (int k = 0; k < n; k++)
            {
                if (j == 0)
                {
                    if (s1[j] == s2[k])
                        mxlen = 1;
                }
                else
                {
                    if (s1[j] == s2[k])
                    {
                        if (mxlen[j - 1] + 1 > )
                    }
                }
            }
        }
    }



}
