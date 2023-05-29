#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    // *a = 12;
    cin >> *a;
    cout << a << " " << *a << endl;

    float *b = new float;
    cin >> *b;
    cout << fixed << setprecision(2) << *b << endl;
    return 0;
}