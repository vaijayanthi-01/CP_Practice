// https://atcoder.jp/contests/abc114/tasks/abc114_a

#include <iostream>
using namespace std;
 
int main()
{
  int age;
  cin >> age;
  
  if(age == 3 || age == 5 || age == 7)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
