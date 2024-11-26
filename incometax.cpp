#include <iostream>
using namespace std;

int main()
{
    float annual_income;
    float tax;
    cout << "enter the annual income " << endl;
    cin >> annual_income;
    if (annual_income <= 250000)
    {
        cout << "no tax";
    }
    else
    {
        if (annual_income >= 250001)
        {
            tax = annual_income * 0.05;
            cout << "5% of annual income is" << tax;
        }

        else if (annual_income >= 500001 && annual_income <= 1000000)
        {
            tax = annual_income * (20 / 100);
            cout << "20% of annual income is" << tax;
        }
        else
        {
            tax = annual_income * (30 / 100);
            cout << "30% of annual income is" << tax;
        }
    }

    return 0;
}