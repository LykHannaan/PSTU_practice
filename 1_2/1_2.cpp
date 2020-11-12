#include <iostream>
#include <math.h>
using namespace std;

float x, y;

int main()
{
    setlocale(LC_ALL, "RUS");
    cin >> x >> y;

    if (y != 0)
    {
        cout << x / y;
    }
    else
    {
        cout << "Не дели на ноль!";

    }
    return 0;
}
