#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N)
    {
        int m, n, l;
        int cnt = 0, seat[21][21] = { { 0 } };
        int x, y;
        int direction[4][2] = { {0, -1}, {-1, 0}, {0, 1}, {1, 0} };
        cin >> m >> n >> l;
        for (int k = 0; k < l; k++)
        {
            cin >> x >> y;
            if (seat[x][y] == 0)
            {
                seat[x][y] = 1;
                cnt++;
            }
            for (int i = 0; i < 8; i++)
            {
                int a = x + direction[i][0], b = y + direction[i][1];
                if (a > 0 && a <= m && b > 0 && b <= n)
                {
                    if (seat[a][b] == 0)
                    {
                        seat[a][b] = 1;
                        cnt ++;
                    }
                }
            }
        }
        if (cnt == m * n)
            cout << "Y" << endl;
        else
            cout << "N" << endl;

        N --;
    }


}
