#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, r;
    char ch1, ch2;
    cin >> a >> ch1 >> b >> ch2 >> c;
    if (ch1 == '+' && ch2 == '=')
    {
        r = a + b;
        if (r == c)
        {
            cout << "Yes" << endl;
        }
        else
            cout << r << endl;
    }
    else if (ch1 == '-' && ch2 == '=')
    {
        r = a - b;
        if (r == c)
        {
            cout << "Yes" << endl;
        }
        else
            cout << r << endl;
    }
    else if (ch1 == '*' && ch2 == '=')
    {
        r = a * b;
        if (r == c)
        {
            cout << "Yes" << endl;
        }
        else
            cout << r << endl;
    }
    return 0;
}