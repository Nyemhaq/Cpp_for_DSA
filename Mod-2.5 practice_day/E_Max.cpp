#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i, mx = INT_MIN;
    cin >> a;
    int arr[a];
    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (mx < arr[i])
        {
            mx = max(mx, arr[i]);
        }
    }
    cout << mx << endl;
    return 0;
}