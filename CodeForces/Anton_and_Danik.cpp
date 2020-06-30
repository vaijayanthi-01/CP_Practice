// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    
    int cntA = 0, cntD = 0;
    for(int i = 0; i < n; ++i)
    {
        if(str[i] == 'A')
            ++cntA;
        else
            ++cntD;
    }
    
    if(cntA > cntD)
        cout << "Anton";
    else if(cntA < cntD)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
