// https://codeforces.com/problemset/problem/136/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int p[n], pos[n + 1];
    for(int i = 0; i < n; ++i)
    {
        cin >> p[i];
        pos[p[i]] = i + 1;
    }
    
    for(int i = 1; i <= n; ++i)
        cout << pos[i] << " ";
    return 0;
}
