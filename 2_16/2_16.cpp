//По условию задачи нам требуется посчитать сумму данной последовательности до N слагаемых. 
//Обозначим длину последовательности как целочисленную переменную n. 
//Также для решения задачи понадобится переменная s для обозначения суммы последовательности.
//Рассмотрев последовательность, отметим, что каждый ее нечетный элемент является отрицательным. 
//С помощью цикла for перебираем натуральные числа от 1 до n, каждый нечетный элемент последовательности вычитаем из переменной s, а каждый четный прибавляем.
//После выхода из цикла производим стандартный вывод суммы.

#include <iostream>
using namespace std;

int n,s;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) s -= i;
        else s += i;
    }
    cout << s;
    return 0;
}
