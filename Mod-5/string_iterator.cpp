#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string::iterator it;
    for (it = s1.begin(); it < s1.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl
         << endl;
    for (auto it = s2.begin(); it < s2.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}