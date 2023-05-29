#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    char b[100];
    cin.getline(a, 100); // counts with space
    cin >> b;            // counts without space
    cout << a << endl
         << b << endl
         << strlen(a) << endl
         << strlen(b) << endl;
    return 0;
}