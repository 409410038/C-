#include <iostream>
using namespace std;

int main()
{
    int cnt;
    int m, n;
    int matrix[100][100];
    cin >> cnt;
    while (cnt)
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    cout << '_' << " ";
                    continue;
                }

                if (i+1 < m && matrix[i+1][j] == 0)
                {
                    cout << '0' << " ";
                }
                else if (j+1 < n && matrix[i][j+1] == 0)
                {
                    cout << '0' << " ";
                }
                else if (j-1 >= 0 && matrix[i][j-1] == 0)
                {
                    cout << '0' << " ";
                }
                else if (i-1 >= 0 && matrix[i-1][j] == 0)
                {
                    cout << '0' << " ";
                }
                else
                {
                    cout << '_' << " ";
                }
            }
            cout << endl;
        }
        cnt--;
        if (cnt != 0) cout << endl;
    }
}
