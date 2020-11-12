#include <iostream>
#include <math.h>
using namespace std;

float a, b;

int main()
{
    setlocale(LC_ALL, "RUS");
    cin >> a >> b;

    if (b != 0)
    {
        cout << a / b;
    }
    else
    {
        cout << "Не дели на ноль!";

    }
    return 0;
}
