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
int main()
{
    Person *Nayem = new Person("Nayem", 6, 25);

    Person *Fahim = new Person("Fahim", 4, 29);

    (Nayem->age > Fahim->age) ? cout << Nayem->name : cout << Fahim->name;
    return 0;
}