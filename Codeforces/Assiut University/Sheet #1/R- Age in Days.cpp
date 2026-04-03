#include <iostream>

using namespace std;

int main()
{
    int AgeInDays, AgeInYears = 0, AgeInMonths = 0, Remainder = 0;
    cin >> AgeInDays;

    AgeInYears = AgeInDays / 365;
    cout << AgeInYears << " years" << endl;
    Remainder = AgeInDays % 365;

    AgeInMonths = Remainder / 30;
    cout << AgeInMonths << " months" << endl;
    Remainder = Remainder % 30;

    AgeInDays = Remainder;
    cout << AgeInDays << " days" << endl;

    return 0;
}
