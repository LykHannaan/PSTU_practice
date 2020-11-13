#include <iostream>
using namespace std;

//По условию задачи нам необходимо построить прямоугольный равнобедренный треугольник из звездочек со сторонами катетов, равными N, и прямым углом справа снизу. 
//Поскольку значение N не задано, предполагается, что оно должно вводиться пользователем. Для этого обозначим целочисленную (т.к. N - натуральное число) переменную n.
//Т.к. в условии задачи сказано, что n больше 2, проверим правильность воодимого пользователем значения с помощью оператора if, в случае несоответствия данному условию выводим сообщение пользователю об ошибке.
//Для дальнейшей работы нам понадобятся новые переменные p=n-1  и z=1 (поскольку прямой угол находится справа снизу) для обозначения количества пробелов и звездочек, из которых будет строиться треугольник. 
//Для решения задачи оптимально использовать вложенные циклы. 
//С помощью внешнего цикла while перебираем строки, пока не дойдем до строки с n звездочками(т.е. до основания треугольника).  
//На каждом шаге этого цикла, используя вложенные циклы for, выводим сначала количество пробелов(p), а затем количество звездочек(z). 
//Далее, исходя из всех вышеперечисленных условий данной задачи, можно заметить, что при изображении треугольника количество звездочек в каждой строке увеличивается на 1, а пробелов уменьшается на 1, 
//т.е. после выхода из вложенных циклов необходимо соответственно увеличить значение переменной z на 1 и уменьшить значение p на 1 и перейти на следующую строку.  
//По достижению внешним циклом значения n треугольник готов.


int n; //длина основания

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите длину катета:" << endl;
	cin >> n;
	
       if (n <= 2)
	     cout << "Не соответствует условию задачи!";
       else
	{
	  int p = n-1; //количество пробелов
	  int z = 1;  //количество звездочек 
	       
		while (z <= n)
		{
			for (int j = 1; j <= p; j++)
			{
				cout << "  ";
			}
			for (int j = 1; j <= z; j++)
			{
				cout << "* ";
			}
			p--;
			z++;
			cout << endl;
		}
       }
	return 0;
}
