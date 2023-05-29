#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int cls;
    int roll;
    char section;
};
int main()
{
    Student Nayem;
    Nayem.cls = 8;
    Nayem.roll = 16;
    Nayem.section = 'A';
    char name2[100] = "Nayem";
    strcpy(Nayem.name, name2);

    cout << Nayem.name << endl;
    cout << Nayem.roll << endl;
    cout << Nayem.cls << endl;
    cout << Nayem.section << endl;
    return 0;
}