#include <iostream>
using namespace std;
float x;
int main()
{
    cin >> x;
    if (x < 5) { x *= 3; }
    else if (x <= 7) { x /= 10; }
         else if (x > 7) { x += 3; }
    cout << x;
    return 0;
}

