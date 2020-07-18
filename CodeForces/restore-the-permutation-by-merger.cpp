// https://codeforces.com/contest/1385/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(2*n);
        
        for(int i = 0; i < 2 * n; ++i)
            cin >> a[i];
        
        vector <int> p(n);
        
        for(int i = 0; i < n; ++i)
            p[i] = 0;
        
        p[0] = a[0];
        p[n-1] = a[2*n - 1];
        
        int pos = 1;
        
        vector <int>::iterator it;
        for(int i = 1; (i < 2*n) && (pos != n - 1); ++i)
        {
            it = find(p.begin(), p.end(), a[i]);
            if(it == p.end())
            {
                p[pos] = a[i];
                ++pos;
            }
            else
                continue;
        }
        
        for(int i = 0; i < n; ++i)
            cout << p[i] << " ";
        cout << endl;
    }
}
