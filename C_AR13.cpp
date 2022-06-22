#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int M;
    int matrix1[11][11], matrix2[11][11];
    cin >> M;
    while (M)
    {
        int n, cnt = 0;
        char c;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                matrix1[i][j] = (i) * n + (j + 1);
        }
        c = cin.get();
        while (!isalpha(c))
            c = cin.get();
        while (isalpha(c))
        {
            if (c == 'R')
            {
                if (cnt % 2 == 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            matrix2[i][j] = matrix1[n-1-j][i];
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            matrix1[i][j] = matrix2[n-1-j][i];
                        }
                    }
                }
            }
            else if (c == 'L')
            {
                if (cnt % 2 == 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            matrix2[i][j] = matrix1[j][n-1-i];
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            matrix1[i][j] = matrix2[j][n-1-i];
                        }
                    }
                }
            }
            else if (c == 'N')
            {
                if (cnt % 2 == 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            matrix2[i][j] = matrix1[n-1-i][j];
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            matrix1[i][j] = matrix2[n-1-i][j];
                        }
                    }
                }
            }
            cnt++;
            c = cin.get();
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (cnt%2 == 0)
                {
                    cout << setw(5) << right << matrix1[i][j];
                }
                else
                {
                    cout << setw(5) << right << matrix2[i][j];
                }
            }
            cout << endl;
        }

        M --;
        if (M != 0)
            cout << endl;
    }
}
