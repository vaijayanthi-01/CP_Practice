// https://codeforces.com/contest/1368/problem/A

#include <iostream>
using namespace std;
 
int main(void)
{
    int t;
    cin >> t;
    int count = 0;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >>n;
        int count = 0;
        while(a <= n && b <= n)
        {
            if(a < b)
            {
                a += b;
                ++count;
            }
            else
            {
                b += a;
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}
