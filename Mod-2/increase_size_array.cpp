#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a;
    int *arr = new int[a];
    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cin >> b;
    int *arr2 = new int[b];
    for (i = 0; i < a; i++)
    {
        arr2[i] = arr[i];
    }
    arr2[5] = 6;
    arr2[6] = 7;
    arr2[7] = 8;
    arr2[8] = 9;
    arr2[9] = 0;
    for (i = 0; i < b; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}