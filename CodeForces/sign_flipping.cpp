// https://codeforces.com/problemset/problem/1375/A

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        
        for(int i = 0; i < n; ++i)
        {
            if(i%2 == 0) a[i] = -abs(a[i]);
            else a[i] = abs(a[i]);
        }
        
        for(int i = 0; i < n; ++i)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
