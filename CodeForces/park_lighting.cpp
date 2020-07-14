// https://codeforces.com/contest/1358/problem/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        int ans = 0;
        if((n*m)%2 == 0)
            ans = (n*m)/2;
        else
            ans = ((n*m)+1)/2;
        cout << ans << endl;
    }
    return 0;
}
