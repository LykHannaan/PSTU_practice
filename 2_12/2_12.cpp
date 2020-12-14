//По условию задачи необходимо найти сумму максимального и минимального элементов последовательности. 
//Все элементы последовательности и их количество вводятся пользователем с клавиатуры.
//Для дальнейшей работы с задачей нам понадобятся три переменные: 
//n - целочисленная переменная для обозначения длины последовательности, t - для обозначения элементов последовательности, вводимых пользователем, и max - для нахождения максимального элемента.
//Предположим, что числа в последовательности могут быть не только целыми (поскольку об этом не сказано в условии), 
//поэтому зададим переменным t,max,min,sum тип данных float (число с плавающей точкой).
//Введем первый элемент последовательности t вместе с длиной последовательности n и зададим начальное значение для max и min равное этому t.  
//Для ввода оставшихся элементов последовательности и нахождения из них максимального и минимального воспользуемся циклом for от 1 до n (не включительно). 
//На каждом шаге итерации производится стандартный ввод пользователем числа t, 
//а затем это число сравнивается с текущими значениями переменных max и min, если t > max, то max присваивается значение t, если t < min, min присваиваетcя значение t.
//На выходе из цикла суммируем максимальное и минимальное числа и производим стандартный вывод полученной суммы.

#include <iostream>
using namespace std;

int n, t, sum=0;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n >> t;
	int max=t, min=t;
	for (int i = 1; i < n; i++)
	{
		cin >> t;
		if (t > max) max = t;
		if (t < min) min = t;
	}
	sum = max + min;
	cout << sum;
	return 0;
}
