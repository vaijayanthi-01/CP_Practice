// https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    string str;
    cin >> n >> t >> str;
    
    while(t--)
    {
        for(int i = 0; i < n-1; ++i)
        {
            if(str[i] == 'B' && str[i+1] == 'G')
            {
                str[i] = 'G';
                str[i+1] = 'B';
                ++i;
            }
        }
    }
    
    cout << str << endl;
    return 0;
}
