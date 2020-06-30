// https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int len = str.length();
    int upper = 0, lower = 0;
    
    for(int i = 0; i < len; ++i)
    {
        if(isupper(str[i]))
            ++upper;
        else if(islower(str[i]))
            ++lower;
    }
    
    if(upper == lower)
    {
        for(int i = 0; i < len; ++i)
            str[i] = tolower(str[i]);
    }
    else if(upper < lower)
    {
        for(int i = 0; i < len; ++i)
            str[i] = tolower(str[i]);
    }
    else
    {
        for(int i = 0; i < len; ++i)
            str[i] = toupper(str[i]);
    }
    
    cout << str;
    return 0;
}
