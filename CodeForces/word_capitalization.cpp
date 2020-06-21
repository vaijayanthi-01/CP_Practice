// https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string str;
  getline(cin, str);
  
  if(str.at(0) >= 97 && str.at(0) <= 122)
    str.at(0) -= 32;
  cout << str << endl;
  return 0;
}
