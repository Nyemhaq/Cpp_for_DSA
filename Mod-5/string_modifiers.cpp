#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2;
    s3 = s1 + s2;
    cout << s3 << endl;

    cout << s2.append(s1) << endl;

    s1.push_back('O');
    cout << s1 << endl;

    s1.pop_back();
    cout << s1 << endl;

    s1.erase(3, 2);
    cout << s1 << endl;

    s1.replace(3, 2, "lo");
    cout << s1 << endl;

    s1.insert(4, "NEW");
    cout << s1 << endl;

    return 0;
}