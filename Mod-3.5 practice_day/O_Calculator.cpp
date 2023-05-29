#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    char ch;
    cin >> a >> ch >> b;
    if (ch == '+')
    {
        c = a + b;
        cout << c << endl;
    }
    else if (ch == '-')
    {
        c = a - b;
        cout << c << endl;
    }
    else if (ch == '*')
    {
        c = a * b;
        cout << c << endl;
    }
    else if (ch == '/')
    {
        c = a / b;
        cout << c << endl;
    }
    return 0;
}