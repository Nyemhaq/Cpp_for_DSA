#include <bits/stdc++.h>
using namespace std;
class Mango
{
public:
    char name[100];
    int size_in_cm;
    char smell[100];
    int price_per_kg;
};
int main()
{
    Mango Fazli;
    char name2[100] = "Fazli";
    char smell2[100] = "Sweet";
    strcpy(Fazli.name, name2);
    Fazli.size_in_cm = 10;
    strcpy(Fazli.smell, smell2);
    Fazli.price_per_kg = 120;

    cout << Fazli.name << " " << Fazli.size_in_cm << " " << Fazli.smell << " " << Fazli.price_per_kg << endl;
    return 0;
}