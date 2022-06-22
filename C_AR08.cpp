#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string num;
    string sub_str;
    cin >> num;
    int maxlen = num.length();
    size_t indx;
    int max_prime = 1;
    int flag = 0;

    while (flag == 0)
    {
        indx = (size_t)maxlen;
        if (maxlen == 0)
            break;

        for (int i = 0; i < num.length(); i++)
        {

            if (maxlen+i > num.length())
                break;
            sub_str.assign(num, i, maxlen);
            int x = stoi(sub_str);
            //cout << x << endl;
            //cout << i << " " << maxlen+i-1 << endl;
            int p = 1;
            for (int j = 2; j <= (int)sqrt(x); j++)
            {
                if (x%j == 0)
                {
                    p = 0;
                    break;
                }
            }
            if (p == 1)
            {
                if (x > max_prime)
                {
                    max_prime = x;
                    flag = 1;
                }
            }
        }
        maxlen--;
    }
    if (flag)
        cout << max_prime << endl;
    else
        cout << "No prime found" << endl;
}
