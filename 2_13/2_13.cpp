#include <iostream>
using namespace std;

float a,b,c,d,x1,x2;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> a >> b >> c;
	cout << "Квадратное уравнение: " << a << "x^2 + " << b << "x + " << c;
	cout << endl;
	float d;
	d = b * b - 4 * a * c; //дискриминант уравнения
	if (d < 0) cout << "корней нет";
	else if (d == 0)
	{
		x1 = -b / 2 * a;
		cout << "Корень уравнения: " << x1;
	}
		else if (d > 0)
		{
			x1 = (-b + sqrt(d)) / 2 * a;
			x2 = (-b - sqrt(d)) / 2 * a;
			cout << "Первый корень: " << x1;
			cout << endl;
			cout << "Второй корень: " << x2;
		}
			return 0;
}
