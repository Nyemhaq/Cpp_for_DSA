#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a;
    b = (float)a - (int)a;
    ((int)a == a) ? cout << "int"
                         << " " << a << endl
                  : cout << "float"
                         << " " << (int)a << " " << fixed << setprecision(3) << b << endl;
    return 0;
}