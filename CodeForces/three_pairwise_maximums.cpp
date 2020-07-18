// https://codeforces.com/contest/1385/problem/A

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a, b, c;
        
        if(x == y && y == z)
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
        else if(x == y && x > z)
        {
            a = x;
            b = z;
            c = 1;
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }
        else if(y == z && y > x)
        {
            c = y;
            a = x;
            b = 1;
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }
        else if(x == z && x > y)
        {
            b = z;
            c = y;
            a = 1;
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }
        else 
            cout << "NO\n";
    }
}
