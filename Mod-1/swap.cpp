#include <iostream>
#include <utility>
using namespace std;
// void my_swap(int *a, int *b) // call by reference
// {
//     int c = 0;
//     c = *a; // dereference
//     *a = *b;
//     *b = c;
// }
int main()
{
    int a, b;
    cin >> a >> b;
    // my_swap(&a, &b); // call by reference
    swap(a, b);
    cout << a << " " << b << endl;
}