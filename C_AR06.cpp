#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Input;
    int inlen;
    string Search;
    char dictory[21][21] = { {'\0'} };
    int cnt = 0;
    cin >> Input;
    inlen = Input.length();
    if (inlen > 10)
    {
        cout << "Target Overflow" << endl;
        return 0;
    }
    while (cin >> Search)
    {
        if (cnt >= 20 || Search.length() > 20)
        {
            cout << "Array Overflow" << endl;
            return 0;
        }
        for (int i = 0; i < Search.length(); i++)
        {
            dictory[cnt][i] = Search[i];
        }
        cnt ++;
    }
    int direction[8][2] = { {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1} };
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (dictory[i][j] == Input[0])
            {
                for (int d = 0; d < 8; d++)
                {
                    int x = direction[d][0], y = direction[d][1];
                    if (i+(inlen-1)*x >= 0 && i+(inlen-1)*x < 20 && j+(inlen-1)*y >= 0 &&  j+(inlen-1)*y < 20)
                    {
                        for (int k = 1; k < inlen; k++)
                        {
                            if (dictory[i+k*x][j+k*y] != Input[k])
                                break;
                            if ( k == inlen-1)
                            {
                                cout << i << ", " << j << " To " << i+x*k << ", " << j+y*k << endl;
                            }
                        }
                    }
                }

            }

        }
    }


}
