#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}