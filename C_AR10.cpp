#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double fee;
    double cost = 0, sec;
    cin >> fee ;
    cin.get();
    cin >> sec;
    if (fee == 186)
    {
        cost = round(sec * 0.09);
        if (cost - fee <= 0)
            cost = fee;
        else
        {
            if (cost/fee <= 2)
                cost *= 0.9;
            else if (cost/fee > 2)
                cost *= 0.8;
            cost = round(cost);
        }
    }
    else if (fee == 386)
    {
        cost = round(sec * 0.08);
        if (cost - fee <= 0)
            cost = fee;
        else
        {
            if (cost/fee <= 2)
                cost *= 0.8;
            else if (cost/fee > 2)
                cost *= 0.7;
            cost = round(cost);
        }

    }
    else if (fee == 586)
    {
        cost = round(sec * 0.07);
        if (cost - fee <= 0)
            cost = fee;
        else
        {
            if (cost/fee <= 2)
                cost *= 0.7;
            else if (cost/fee > 2)
                cost *= 0.6;
            cost = round(cost);
        }
    }
    else if (fee == 986)
    {
        cost = round(sec * 0.06);
        if (cost - fee <= 0)
            cost = fee;
        else
        {
            if (cost/fee <= 2)
                cost *= 0.6;
            else if (cost/fee > 2)
                cost *= 0.5;
            cost = round(cost);
        }
    }
    cout << cost << endl;
}
