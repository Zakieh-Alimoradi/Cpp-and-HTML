#include <iostream>
using namespace std;

int tabemaximum(int *grades, int n)
 {
    int max = grades[0];
    for (int i = 1; i < n; i++)
    {
        if (grades[i] > max)
        {
            max = grades[i];
        }
    }
    return max;
}

int tabeminimum(int *grades, int n)
{
    int min = grades[0];
    for (int i = 1; i < n; i++)
    {
        if (grades[i] < min)
        {
            min = grades[i];
        }
    }
    return min;
}

int main()
{
    int grades[100];
    int n=100;

    cout<<"Please enter scores of 100 students:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"score:"<<endl;
        cin>>grades[i];
    }

    int max = tabemaximum(grades, n);
    int min = tabeminimum(grades, n);

    int faselemax = 20-max;
    int faselemin = 20-min;

    cout<<"Maximum: " << max << endl;
    cout<<"Minimum: " << min << endl;
    cout<<"Distance between Maximum to 20: " << faselemax <<endl;
    cout<<"Distance between Minimum to 20: " << faselemin <<endl;

    return 0;
}
