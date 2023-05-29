#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    cout << "Min is : " << mn << endl
         << "Max is : " << mx << endl;
}