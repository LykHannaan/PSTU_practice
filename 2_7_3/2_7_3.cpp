#include <iostream>

using namespace std;

//Необходимо построить пустой квадрат со стороной, равной N звездочек. 
//Поскольку значение N не задано, предполагается, что оно должно вводиться пользователем. Для этого обозначим целочисленную переменную n.
//Так как квадрат пустой, первая и последняя строка 
//с использованием вложенных циклов for. Внешним циклом перебираем строки от 1 до m, вложенным выводим звездочки от 1 до m. 

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
