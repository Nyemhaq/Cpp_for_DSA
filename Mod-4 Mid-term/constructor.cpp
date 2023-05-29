#include <bits/stdc++.h>
using namespace std;
class Mango
{
public:
    char name[100];
    int size_in_cm;
    char smell[100];
    int price_per_kg;

    Mango(char *n, int s, char *sm, int p)
    {
        strcpy(name, n);
        size_in_cm = s;
        strcpy(smell, sm);
        price_per_kg = p;
    }
};
int main()
{
    Mango Fazli("Fazli", 12, "sweet", 150);

    cout << Fazli.name << " " << Fazli.size_in_cm << " " << Fazli.smell << " " << Fazli.price_per_kg << endl;
    return 0;
}