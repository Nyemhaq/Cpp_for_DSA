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

    cout << Nayem->name << " " << Nayem->height << " " << Nayem->age << endl;
    return 0;
}