// https://codeforces.com/problemset/problem/705/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string s1 = "I hate ";
    string s2 = "that ";
    string s3 = "I love ";
    string s4 = "it";
    
    int cnt = 0;
    string ans;
    for(int i = 0; i < 2*n; ++i)
    {
        if(i == 2*n-1)
            ans += s4;
        else if(i%2==0 && cnt%2==0)
        {
            ans += s1;
            ++cnt;
        }
        else if(i%2==0 && cnt%2 != 0)
        {
            ans += s3;
            ++cnt;
        }
        else if(i%2 != 0)
            ans += s2;
    }
    
    cout << ans;
    return 0;
}
