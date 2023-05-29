#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};
Person info()
{
    char nm[100] = "Nayem";
    Person N(nm, 5.11, 25);
    return N;
}
int main()
{
    Person Nayem = info();
    cout << Nayem.name << " " << Nayem.height << " " << Nayem.age << endl;
    return 0;
}