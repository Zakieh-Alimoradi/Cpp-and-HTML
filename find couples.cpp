#include <iostream>
#include <string>
using namespace std;

struct date
{
    int Year,Month,Day;

};

struct address
{
    string city1 , city2,MainStreet,PostalCode;
};

struct Couple
{
    string firstName1,LastName1,firstName2,lastName2;
    int id1, id2;

    date d;
    address a;
};


void dcouples(Couple c[][2],int l)
{
    for (int i=0;i<l;i++)
        {
              cout << "Please enter details for couple " << i+1 << ":\n";
              cout << "Wife's first name: "; cin >> c[i][0].firstName1;
              cout << "Wife's last name: "; cin >> c[i][0].lastName2;
              cout << "Wife's ID: "; cin >> c[i][0].id1;
              cout << "Husband's first name: "; cin >> c[i][0].firstName2;
              cout << "Husband's last name: "; cin >> c[i][0].lastName2;
              cout << "Husband's ID: "; cin >> c[i][0].id2;
              cout << "Marriage Year: "; cin >> c[i][0].d.Year;
              cout << "Marriage Month: "; cin >> c[i][0].d.Month;
              cout << "Marriage Day: "; cin >> c[i][0].d.Day;
              cout << "Wife's city: "; cin >> c[i][0].a.city1;
              cout << "Husband's city: "; cin >> c[i][0].a.city2;
              cout << "Main Street: "; cin >> c[i][0].a.MainStreet;
              cout << "Postal Code: "; cin >> c[i][0].a.PostalCode;
        }
}

int Samecity(Couple c[][2], int l)
{
    int z=0;
    for (int i=0;i<l;i++)
        {
        if (c[i][0].a.city1==c[i][0].a.city2)
          {
            z++;
          }
        }
    return z;
}

void congratulate(Couple c[][2],int l)
{
    int ThisYear=2024;

    for (int i=0;i<l;i++)
        {
        if (ThisYear-c[i][0].d.Year > 20)
          {
            cout << "\n" << "Congratulations to: " << c[i][0].firstName1 << " " << c[i][0].LastName1 << " and " << c[i][0].firstName2 << " " << c[i][0].lastName2 << " for more than 20 years of marriage\n";
          }
        }
}

int main()
{
    int numCouple=100;
    Couple c[numCouple][2];
    dcouples(c,numCouple);

    int same=Samecity(c,numCouple);
    cout << "\n" << "Number of couples living in a same city: " << same << endl;

    congratulate(c,numCouple);

    return 0;
}
