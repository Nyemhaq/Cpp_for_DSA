#include <bits/stdc++.h>
using namespace std;
int main()
{
    char f1[100000], f2[100000], s1[100000], s2[100000];
    cin >> f1 >> s1 >> f2 >> s2;
    strcmp(s1, s2) == 0 ? cout << "ARE Brothers" << endl : cout << "NOT" << endl;
    return 0;
}