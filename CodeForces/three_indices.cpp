// https://codeforces.com/contest/1380/problem/A

#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int p[n];
        
        for(int x = 0; x < n; ++x)
            cin >> p[x];
        
        int i, j, k;
        bool flag = false;
        
        for(int x = 1; x < n-1; ++x)
        {
            if(p[x] >= p[x-1] + p[x+1])
            {
                flag = true;
                i = x-1;
                j = x;
                k = x+1;
                break;
            }
        }
        
        if(flag)
            cout << "YES\n" << i+1 << " " << j+1 << " " << k+1 << endl;
        else
            cout << "NO\n";
    }
    return 0;
}
