// https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    int steps = 0;
    while(x > 0)
    {
        if(x >= 5)
        {
            ++steps;
            x -= 5;
        }
        else if(x >= 4)
        {
            ++steps;
            x -= 4;
        }
        else if(x >= 3)
        {
            ++steps;
            x -= 3;
        }
        else if(x >= 2)
        {
            ++steps;
            x -= 2;
        }
        else if(x >= 1)
        {
            ++steps;
            x -= 1;
        }
    }
    
    cout << steps << endl;
    return 0;
}
