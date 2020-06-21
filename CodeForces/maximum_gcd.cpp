// https://codeforces.com/contest/1370/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    if(n % 2 == 0)
      cout << n/2 << endl;
    else
      cout << (n - 1)/2 << endl;
  }
  return 0;
}
