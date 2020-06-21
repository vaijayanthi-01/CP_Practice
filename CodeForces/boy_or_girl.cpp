// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    int flag[26] = {0};
    int count = 0, i;
    int len = s.size();
    
    for(i = 0; i < len; ++i)
    {
        if(flag[(int)s.at(i) - (int)'a'] == 0){
            ++count;
            flag[(int)s.at(i) - (int)'a'] = 1;
        }
    }
    if(count % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
    return 0;
}
