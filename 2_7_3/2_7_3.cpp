#include <iostream>

using namespace std;

int n, m;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << "* ";
	}
	cout << endl;

	for (int i = 1; i <= n - 2; i++)
	{
		cout << "* ";
		for (int i = 2; i <= n - 1; i++)
		{
			cout << "  ";
		}
		cout << "* ";
		cout << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << "* ";
	}
	cout << endl;
	return 0;
}
