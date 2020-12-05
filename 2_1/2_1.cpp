#include <iostream>
using namespace std;
int n,m,sum;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        sum += m;
    }
    
    cout << sum;
    return 0;
}
