// https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main(void)
{
    int n, k, w;
    cin >> k >> n >> w;
    
    int arr[w], i;
    
    for(i = 0; i < w; ++i)
        arr[i] = i + 1;
    
    int price = 0;
    
    for(i = 0; i < w; ++i)
        price += k * arr[i];
    
    if(price > n)
        cout << (price - n) << endl;
    else
        cout << "0\n";
    
    return 0;
}
