// https://codeforces.com/problemset/problem/546/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  
  for(int i = 0; i < n; ++i)
    cin >> a[i];
  
  sort(a, a+n);
  
  int coins = 0;
  for(int i = 0; i < n; ++i)
  {
    for(int j = i + 1; j < n; ++j)
    {
      if(a[i] == a[j])
      {
        ++a[j];
        ++coins;
      }
    }
  }
  
  cout << coins << endl;
  return 0;
}
