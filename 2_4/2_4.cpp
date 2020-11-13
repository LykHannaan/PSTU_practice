#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите длину основания:" << endl;
	
	int n; //длина основания
	int p = n / 2; //количество " "
	int z = 1;  //количество "*"
     
	 cin >> n;

	if ((n <= 3) or (n % 2 == 0))
		cout << "Не соответствует условию задачи!";
	else
	{
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
			z += 2;
			cout << endl;
		}
	}
	return 0;
}
