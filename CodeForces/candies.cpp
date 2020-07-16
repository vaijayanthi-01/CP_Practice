// https://codeforces.com/contest/1343/problem/A

#include <iostream>
#include <cmath>
using namespace std;
 
int main(void)
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int k = 0;
        for(int i = 2; i <= 32; ++i)
        {
            k = pow(2, i) - 1;
            if(n % k == 0)
            {
                cout << n/k << endl;
                break;
            }
        }
        
    }
    return 0;
}
