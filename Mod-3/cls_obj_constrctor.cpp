#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;

    Student(char *n, int r, int c, char s)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        sec = s;
    }
};
int main()
{
    Student Nayem("Nayem", 12, 7, 'B');
    Student Fahim("Fahim", 11, 5, 'X');

    cout << Nayem.name << endl;
    cout << Nayem.roll << endl;
    cout << Nayem.cls << endl;
    cout << Nayem.sec << endl;

    cout << Fahim.name << endl;
    cout << Fahim.roll << endl;
    cout << Fahim.cls << endl;
    cout << Fahim.sec << endl;

    return 0;
}