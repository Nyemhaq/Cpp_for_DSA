#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, p, q, r, s, x;
    cin >> a >> b >> c >> d;
    p = a % 100;
    q = b % 100;
    r = c % 100;
    s = d % 100;
    x = (p * q * r * s) % 100;
    (x <= 9) ? cout << "0" << x << endl : cout << x << endl;
    return 0;
}