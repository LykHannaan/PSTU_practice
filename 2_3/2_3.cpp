#include <iostream>
#include <math.h>
using namespace std;

int n, sum = 0, p = 0;

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		p = 1;
		for (int j = i; j <= i * 2; j++)
		{
			p *= j;
		}
		sum += p;
	}
	cout << sum;
	return 0;
}
