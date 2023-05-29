#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    (s1 == s2) ? cout << "Same" << endl : cout << "Not same" << endl;

    cout << "Size of S1 : " << s1.size() << endl;
    cout << "Maximum Size of S1 : " << s1.max_size() << endl;
    cout << "Capacity of S1 : " << s1.capacity() << endl;
    if (s1.empty() == true)
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    s1.clear();
    cout << s1 << endl;
    s1.resize(2);
    cout << s1 << endl;

    cout << "Size of S2 : " << s2.size() << endl;
    cout << "Maximum Size of S2 : " << s2.max_size() << endl;
    cout << "Capacity of S2 : " << s2.capacity() << endl;

    return 0;
}