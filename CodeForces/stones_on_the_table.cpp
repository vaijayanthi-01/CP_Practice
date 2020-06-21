// https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char s[n + 1];
    scanf("%s", s);
    
    int count = 0, i;
    for(i = 0; i < n - 1; ++i)
    {
        if(s[i] == s[i + 1])
            ++count;
    }
    cout << count << endl;
    return 0;
}
