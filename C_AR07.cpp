#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int matrix[9][9];
    char c;
    int flag = 1;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            c = cin.get();
            while (!isdigit(c))
                c = cin.get();
            matrix[i][j] = c - '0';
        }
    }

    for (int i = 0; i < 9; i++)
    {
        int selected[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            if (matrix[i][j] == 0)
                continue;
            if (selected[matrix[i][j]] == 1)
            {
                cout << "row" << i+1 << " #" << matrix[i][j] << endl;
                flag = 0;
                break;
            }
            else
                selected[matrix[i][j]] = 1;
        }
    }
    for (int j = 0; j < 9; j++)
    {
        int selected[10] = {0};
        for (int i = 0; i < 9; i++)
        {
            if (matrix[i][j] == 0)
                continue;
            if (selected[matrix[i][j]] == 1)
            {
                cout << "column" << j+1 << " #" << matrix[i][j] << endl;
                flag = 0;
                break;
            }
            else
                selected[matrix[i][j]] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int selected[10] = {0};
            for (int a = 0; a < 3; a++)
            {
                for (int b = 0; b < 3; b++)
                {
                    //cout << matrix[i*3+a][j*3+b];
                    if (matrix[i*3+a][j*3+b] == 0)
                        continue;
                    if (selected[matrix[i*3+a][j*3+b]] == 1)
                    {
                        cout << "block" << i*3+j+1 << " #" << matrix[i*3+a][j*3+b] << endl;
                        a = 3, b = 3;
                        flag = 0;
                        break;
                    }
                    else
                        selected[matrix[i*3+a][j*3+b]] = 1;
                }
            }
        }
    }
    if (flag)
         cout << "true";


    return 0;
}
