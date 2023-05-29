#include <iostream>
#include <algorithm>
using namespace std;
// int my_min(int a, int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }
// int my_max(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }
int main()
{
    int a, b;
    cin >> a >> b;

    // int x = my_min(a, b);
    // int y = my_max(a, b);

    // cout << x << " " << y << endl;

    int mn = min(a, b);
    int mx = max(a, b);
    cout << "Min is : " << mn << endl
         << "Max is : " << mx << endl;
}