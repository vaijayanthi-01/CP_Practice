// https://codeforces.com/contest/1380/problem/B

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        int r = 0, s = 0, p = 0;
        
        for(int i = 0; i < len; ++i)
        {
            if(str[i] == 'R') 
                ++r;
            else if(str[i] == 'S')
                ++s;
            else if(str[i] == 'P')
                ++p;
        }
        
        int maximum = max({r, s, p});
        
        for(int i = 0; i < len; ++i)
        {
            if(maximum == r)
                cout << 'P';
            else if(maximum == s)
                cout << 'R';
            else
                cout << 'S'; 
        }
        cout << endl;
    }
    return 0;
}
