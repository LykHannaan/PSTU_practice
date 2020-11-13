#include <iostream>
using namespace std;

//По условию задачи нам необходимо построить прямоугольный равнобедренный треугольник из звездочек со сторонами катетов, равными N, и прямым углом справа снизу. 
//Поскольку значение N не задано, предполагается, что оно должно вводиться пользователем. Для этого обозначим целочисленную (т.к. N - натуральное число) переменную n.
//Т.к. в условии задачи сказано, что n больше 2, проверим правильность воодимого пользователем значения с помощью оператора if, в случае несоответствия данному условию сообщение пользователю об ошибке.
//Для дальнейшей работы нам понадобятся новая переменная z=n (поскольку прямой угол находится сверху справа, пробелы не нужны) для обозначения количества звездочек, из которых будет строиться треугольник. 
//Для решения задачи оптимально использовать вложенные циклы. 
//С помощью внешнего цикла while перебираем строки, пока не дойдем до строки с 1 звездочкой (т.е. до вершины треугольника).  
//На каждом шаге этого цикла, используя вложенные циклы for, выводим количество звездочек(z). 
//Далее, исходя из всех вышеперечисленных условий данной задачи, можно заметить, что при изображении треугольника количество звездочек в каждой строке уменьшается на 1, 
//т.е. после выхода из вложенных циклов необходимо соответственно уменьшить значение переменной z на 1 и перейти на следующую строку.  
//По достижению внешним циклом значения 1 треугольник готов.


int n; //длина основания

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n;
	
       if (n <= 2)
	     cout << "Не соответствует условию задачи!";
       else
       {
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
