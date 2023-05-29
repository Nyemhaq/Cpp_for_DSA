#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i;
    cin >> a;
    int arr[a];
    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    cout << "Ascending order sort" << endl;
    for (i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + a, greater<int>());
    cout << "Descending order sort" << endl;
    for (i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}