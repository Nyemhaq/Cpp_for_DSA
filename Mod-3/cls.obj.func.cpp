#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int cls;
    int roll;
    char sec;

    Student(char *n, int c, int r, char s)
    {
        strcpy(name, n);
        cls = c;
        roll = r;
        sec = s;
    }
};
Student fun()
{
    char name[100] = "Nayem";
    Student N(name, 3, 19, 'Z');
    return N;
}
int main()
{
    Student Nayem = fun();
    cout << Nayem.name << endl;
    cout << Nayem.roll << endl;
    cout << Nayem.cls << endl;
    cout << Nayem.sec << endl;
    return 0;
}