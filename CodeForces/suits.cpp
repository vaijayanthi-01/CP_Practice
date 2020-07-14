// https://codeforces.com/contest/1271/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, e, f, min1 = 0, min2 = 0;
    cin >> a >> b >> c >> d >> e >> f;
    unsigned long long int cost = 0;
    
    if(f > e)
    {
        min1 = min({b, c, d});
        cost += (min1 * f);
        d -= min1;
        if(d > 0)
        {
            min2 = min(a, d);
            cost += (min2 * e);
        }
        cout << cost << endl;
    }
    else if(e > f)
    {
        min1 = min(a, d);
        cost += (min1 * e);
        d -= min1;
        if(d > 0)
        {
            min2 = min({b, c, d});
            cost += (min2 * f);
        }
        cout << cost << endl;
    }
    else
    {
        min1 = min(a, d);
        cost += (min1 * e);
        d -= min1;
        if(d > 0)
        {
            min2 = min({b, c, d});
            cost += (min2 * f);
        }
        cout << cost << endl;
    }
    return 0;
}
