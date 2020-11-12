#include <iostream>

using namespace std;

int n, m;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n;
	m = sqrt(n);
	if ((n != m * m) or (n<=1))
		cout << "Невозможно найти сторону";
	else
	{
		for (int i = 1; i <= m; i++)
		{
			for (int i = 1; i <= m; i++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	return 0;
}
