#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 12;
    float b = 13.567893;
    cout << "Hello" << endl
         << a << endl
         << fixed << setprecision(2) << b << endl
         << "World" << endl;
    return 0;
}