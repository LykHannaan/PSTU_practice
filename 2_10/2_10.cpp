#include <iostream>
using namespace std;

int n, t;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n >> t;
	int max = t;
	for (int i = 1; i < n; i++)
	{
		cin >> t;
		if (t > max) max = t;
	}
	cout << max;
	return 0;
}
