#include <iostream>
using namespace std;

int main()
{
    int N;
    int left, right, num;

    cin >> N;
    while (N)
    {
        int cnt = 0, selected[110] = { 0 };
        int cur_pos = 1;
        int s;
        cin >> left >> right >> num;

        while (cnt < num)
        {
            s = right;
            while (s > 0)
            {
                cur_pos ++;
                if (cur_pos > num)
                    cur_pos -= num;

                if (selected[cur_pos] == 1) //empty
                    continue;
                else
                    s --;
            }
            selected[cur_pos] = 1;
            if (cnt == num - 1)  // this is the last one
            {
                cout << cur_pos << endl;
                break;
            }
            cnt ++;

            s = left;
            while (s > 0)
            {
                cur_pos --;
                if (cur_pos < 1)
                    cur_pos += num;

                if (selected[cur_pos] == 1) //empty
                    continue;
                else
                    s --;
            }
            selected[cur_pos] = 1;
            if (cnt == num - 1)
            {
                cout << cur_pos << endl;
                break;
            }
            cnt ++;
        }
        N--;
    }

}
