#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, tmp = 0, i, arr[10000], arr2[10000], arr3[10000];
    cin >> a >> b >> c >> d;
    for (i = a; i <= b; i++)
    {
        arr[i] = i;
    }
    for (i = c; i <= d; i++)
    {
        arr2[i] = i;
    }
    for (i = a; i <= d; i++)
    {
        if (arr[i] == arr2[i])
        {
            arr3[i] = arr2[i];
            cout << begin(arr3) - end(arr3) << endl;
            break;
        }
    }
    return 0;
}