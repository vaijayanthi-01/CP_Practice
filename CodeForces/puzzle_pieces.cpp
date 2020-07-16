// https://codeforces.com/contest/1345/problem/A

#include <iostream>
using namespace std;
 
int main(void)
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        if(n == 1 || m == 1)
            cout << "YES\n";
        else if(n == 2 && m == 2)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
