#include <iostream>

using namespace std;

bool Cheak(short num1,char symbol, short num2)
{
    switch (symbol)
    {
    case '<':
    {
        return (num1 < num2);
    }
    case '>':
    {
        return (num1 > num2);
    }
    case '=':
    {
        return (num1 == num2);
    }
    }
}

int main()
{
    short num1, num2;
    char symbol;
    cin >> num1 >> symbol >> num2;

    if (Cheak(num1, symbol, num2))
        cout << "Right\n";
    else
        cout << "Wrong\n";

    return 0;
}
