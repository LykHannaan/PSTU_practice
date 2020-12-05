#include <iostream>
using namespace std;

int n, t, s;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n >> t;
	int max = t, min = t;
	for (int i = 1; i < n; i++)
	{
		cin >> t;
		if (t > max) max = t;
		if (t < min) min = t;
	}
	s = max + min;
	cout << s;
	return 0;
}
