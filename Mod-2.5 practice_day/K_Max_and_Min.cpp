#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c && b > c)
        cout << c << " " << a << endl;
    else if (a > b && a > c && c > b)
        cout << b << " " << a << endl;
    else if (b > a && b > c && a > c)
        cout << c << " " << b << endl;
    else if (b > a && b > c && c > a)
        cout << a << " " << b << endl;
    else if (c > a && c > b && a > b)
        cout << b << " " << c << endl;
    else
        cout << a << " " << c << endl;
    return 0;
}