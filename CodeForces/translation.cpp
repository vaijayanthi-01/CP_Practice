// https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    
    int len = s.length();
    for(int i = 0; i < len/2; ++i)
    {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    
    if(s == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
