#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i, j;
    cin >> a;
    int arr[a];
    for (i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}