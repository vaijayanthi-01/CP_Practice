// https://codeforces.com/contest/1343/problem/B

#include <iostream>
using namespace std;
 
int main(void)
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        unsigned long long int sum1 = 0, sum2 = 0;
 
        if(n%4 == 0)
        {
            cout << "YES\n";
            for(int i = 0; i < n/2; ++i)
            {
                a[i] = 2*i + 2;
                cout << a[i] << " ";
                sum1 += a[i];
            }
            for(int i = 0; i < (n/2) - 1; ++i)
            {
                a[i + n/2] = 2*i + 1;
                cout << a[i + n/2] << " ";
                sum2 += a[i + n/2];
            }
            cout << sum1 - sum2 << endl;
            
        }
        else
            cout << "NO\n";
    }
    return 0;
}
