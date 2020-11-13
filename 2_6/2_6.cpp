#include <iostream>
using namespace std;

int n; //длина основания

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите длину основания:" << endl;
	cin >> n;
	int z = n;  //количество звездочек

	while (z >= 1)
	{
		for (int i = 1; i <= z; i++)
		{
			cout << "*";
		}
		z--;
		cout << endl;
	}
	return 0;
}
