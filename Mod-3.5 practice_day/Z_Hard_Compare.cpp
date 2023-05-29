#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    x = b * log(a);
    y = d * log(c);
    (x > y) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}