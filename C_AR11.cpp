#include <iostream>
using namespace std;

int main()
{
    int N, m, n, k;
    int matrix[10][10];
    int sumatrix[11][11] = { 0 };
    cin >> N;
    while(N)
    {
        int maximum = 0;
        cin >> m >> n >> k;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    sumatrix[i+1][j+1] = matrix[i][j];
                else if (i == 0)
                    sumatrix[i+1][j+1] = sumatrix[i+1][j] + matrix[i][j];
                else if (j == 0)
                    sumatrix[i+1][j+1] = sumatrix[i][j+1] + matrix[i][j];
                else
                    sumatrix[i+1][j+1] = sumatrix[i][j+1] + sumatrix[i+1][j] + matrix[i][j] - sumatrix[i][j];
            }
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i-k < 0 || j-k < 0)
                    continue;
                int sum = sumatrix[i][j];
                if (i-k != 0)
                    sum -= sumatrix[i-k][j];

                if (j-k != 0)
                    sum -= sumatrix[i][j-k];

                if (i-k != 0 && j-k != 0)
                    sum += sumatrix[i-k][j-k];

                if (sum > maximum)
                    maximum = sum;
            }
        }
        cout << maximum << endl;


        N--;
    }
}
