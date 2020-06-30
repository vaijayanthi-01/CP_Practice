// https://codeforces.com/problemset/problem/110/A

#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;
    
    int cnt = 0;
    while(n > 0)
    {
        if(n % 10 == 4 || n % 10 == 7)
            ++cnt;
        n /= 10;
    }
    
    if(cnt == 4 || cnt == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
