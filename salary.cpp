#include <iostream>
#include <string>
using namespace std;

struct worker
{
    string name;
    int hour;
    int phour;
    int children;
};

int weekly(worker worker)
{
    int pay = worker.hour*worker.phour;
    int overtime=0;

    if (worker.hour>40)
    {
        overtime=(worker.hour-40)*worker.phour*2;
        pay=40*worker.phour;
    }

    int fpay=pay+overtime;
    int nbime=fpay*0.05+worker.children*100000;
    int nmaliat=fay*0.10;
    int rpay=fay-nbime-nmaliat;

    return rpay;
}

int main()
{
    int numw=1000;
    worker w[numw];

    for (int i=0; i<numw;i++)
    {
        cout << "Please enter details for (name,hours,hourly rate,number of children) worker " << i + 1 << ":" << endl;
        cin >> w[i].name >> w[i].hour >> w[i].phour >> w[i].children ;
    }

    for (int i = 0; i < numw;i++)
        {
        int pweekly= weekly(w[i]);
        cout << "Weekly pay for " << w[i].name << ": " << pweekly << " Toman\n";
    }

    return 0;
}
