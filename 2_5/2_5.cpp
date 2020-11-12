#include <iostream>
using namespace std;

int n; //длина основания.

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите длину основания:" << endl;
	cin >> n;
	int p = n-1; //количество " ".
	int z = 1;  //количество "*".

		while (z <= n)
		{
			for (int j = 1; j <= p; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= z; j++)
			{
				cout << "*";
			}
			p--;
			z++;
			cout << endl;
		}
	return 0;
}
