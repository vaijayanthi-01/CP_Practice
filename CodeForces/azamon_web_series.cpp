// https://codeforces.com/contest/1281/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s, c;
        cin >> s >> c;
        
        int lenS = s.length(), flag = 0;
        
        if(s < c)
        {
            cout << s << endl;
            continue;
        }
        
        for(int i = 0; i < lenS; ++i)
        {
            for(int j = i + 1; j < lenS; ++j)
            {
                if(s[i] == s[j])
                    continue;
                swap(s[i], s[j]);
                if(s < c)
                {
                    flag = 1;
                    break;
                }
                swap(s[i], s[j]);
            }
            if(flag == 1)
                break;
        }
        
        if(flag == 1)
            cout << s << endl;
        else
            cout << "---\n";
    }
    return 0;
}
