#include <iostream>
using namespace std;
int n,m,pr;
int main()
{
    pr = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        pr *= m;
    }
    
    cout << pr;
    return 0;
}
