//По условию задачи необходимо определить, что вводится в последовательность раньше: положительные или отрицательные числа (также все элементы последовательности могут быть нулевыми).
//Все элементы последовательности и их количество вводятся пользователем с клавиатуры.
//Для дальнейшей работы с задачей нам понадобятся целочисленные (т.к. числа в последовательности по условию целые) переменные:
//n - для обозначения количества элементов последовательности, t - для обозначения элементов последовательности, вводимых пользователем, и p - для обозначения первого ненулевого элемента последовательности. 
//Поскольку в начале последовательность может содержать нули, введем первый элемент последовательности t вместе с длиной последовательности n и зададим начальное значение для p равное этому t.  
//Для ввода оставшихся элементов последовательности и нахождения из них первого ненулевого элемента воспользуемся циклом for от 1 до n (не включительно). 
//На каждом шаге итерации производится стандартный ввод пользователем числа t, а затем проверяется текущее значение переменной p, и, если p равно 0, то p присваивается значение переменной t.
//На выходе из цикла проверяем конечное значение переменной p.
//Если p>0, то выводится сообщение пользователю о том, что первый элемент последовательности - положительный, 
//если p<0 - первый ненулевой элемент послдовательности - отрицательный, если p равно 0, то все элементы последовательности равны 0.

#include <iostream>
using namespace std;

int n,t;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n >> t;
	int p = t;
	for (int i = 1; i < n; i++)
	{
		cin >> t;
		if (p == 0) p = t;
	}
		if (p>0) cout << "Первый ненулевой элемент последовательности - положительный";
		else if (p<0) cout << "Первый ненулевой элемент последовательности - отрицательный";
		else if (p == 0) cout << "Все элементы последовательности равны 0";
return 0;
}
