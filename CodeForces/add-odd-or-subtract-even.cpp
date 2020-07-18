// https://codeforces.com/contest/1311/problem/A

#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a, b;
        int p, cnt = 0;;
        cin >> a >> b;
        
        if(a < b)
        {
            p = b - a;
            if(p%2 != 0)
                cnt = 1;
            else
                cnt = 2;
        }
        else if(a > b)
        {
            p = a - b;
            if(p%2 == 0)
                cnt = 1;
            else
                cnt = 2;
        }
        cout << cnt << endl;
    }
}
