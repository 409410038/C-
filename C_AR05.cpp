#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int mycomp(const pair<int, int> &n1, const pair<int, int> &n2)
{
    return n1.second > n2.second;
}
int main()
{
    vector<pair<int, int>>event;
    int n;
    int cnt = 1;
    int schedule[30][25] = { {0} };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        event.push_back(make_pair(a, b));
    }
    sort(event.begin(), event.end(), mycomp);

    for (int i = 0; i < n; i++)
    {
        int start = event[i].first, finish = event[i].second;
        int flag = 0; //need to add a car
        for (int j = 0 ; j < cnt; j++)
        {
            int fail = 0;
            for (int k = start+1; k < finish; k++)
            {
                if (schedule[j][k] == 1)
                {
                    fail = 1;
                    break;
                }
            }
            if (fail == 0)  // can fit in this car schedule
            {
                flag = 0;
                for (int k = start+1; k < finish; k++)
                    schedule[j][k] = 1;
                break;
            }
            else
                flag = 1;
        }
        if (flag == 1)
        {
            for (int k = start+1; k < finish; k++)
            {
                schedule[cnt][k] = 1;
            }
            cnt ++;
        }
    }
    cout << cnt << endl;

}
