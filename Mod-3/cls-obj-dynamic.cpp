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
    Student *Nayem = new Student("nayem", 11, 8, 'R');
    // cout << (*Nayem).name << endl;
    // cout << (*Nayem).roll << endl;
    // cout << (*Nayem).cls << endl;
    // cout << (*Nayem).sec << endl;
    cout << Nayem->name << endl;
    cout << Nayem->roll << endl;
    cout << Nayem->cls << endl;
    cout << Nayem->sec << endl;

    delete Nayem;

    cout << Nayem->name << endl;
    cout << Nayem->roll << endl;
    cout << Nayem->cls << endl;
    cout << Nayem->sec << endl;
    return 0;
}