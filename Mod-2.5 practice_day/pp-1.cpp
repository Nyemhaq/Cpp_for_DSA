#include <bits/stdc++.h>
using namespace std;

int *get_array(int a)
{
    int *arr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int a, i;
    cin >> a;
    int *b = get_array(a);
    for (i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}