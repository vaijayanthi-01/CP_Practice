// https://codeforces.com/contest/1281/problem/A

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        
        if(s[l - 1] == 'o' && s[l - 2] == 'p')
            cout << "FILIPINO\n";
        else if(s[l-1]=='u' && s[l-2]=='s' && s[l-3]=='e' && s[l-4]=='d')
            cout << "JAPANESE\n";
        else if(s[l-1]=='u' && s[l-2]=='s' && s[l-3]=='a' && s[l-4]=='m')
            cout << "JAPANESE\n";
        else if(s[l-1]=='a' && s[l-2]=='d' && s[l-3]=='i' && s[l-4]=='n' && s[l-5]=='m')
            cout << "KOREAN\n";
    }
    return 0;
}
