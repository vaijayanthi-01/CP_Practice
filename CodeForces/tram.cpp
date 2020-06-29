// https://codeforces.com/problemset/problem/116/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n], b[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i] >> b[i];
    
    int pasngrs = 0, min_cpcty = 0;
    for(int i = 0; i < n; ++i)
    {
        pasngrs += (b[i] - a[i]);
        if(pasngrs > min_cpcty)
            min_cpcty = pasngrs;
    }
    
    cout << min_cpcty << endl;
    return 0;
}
