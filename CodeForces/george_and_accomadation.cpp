// https://codeforces.com/problemset/problem/467/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int p[t], q[t];
    
    for(int i = 0; i < t; ++i)
        cin >> p[i] >> q[i];
    
    int cnt = 0;
    for(int i = 0; i < t; ++i)
    {
        if((p[i] < q[i]) && ((q[i] - p[i]) >= 2))
            ++cnt;
    }
    
    cout << cnt;
    return 0;
}
