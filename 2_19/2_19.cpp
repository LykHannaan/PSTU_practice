//По условию задачи нам требуется посчитать сумму данной последовательности до N слагаемых. 
//Обозначим длину последовательности как целочисленную переменную n. 
//Также для решения задачи понадобится переменная s для обозначения суммы последовательности.
//Рассмотрев последовательность, отметим, что каждый элемент последовательности кратный 3 является отрицательным. 
//С помощью цикла for перебираем натуральные числа от 1 до n, каждый элемент последовательности кратный 3 вычитаем из переменной s, остальные прибавляем.
//После выхода из цикла производим стандартный вывод суммы.

#include <iostream>
using namespace std;

int n,s;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0) s -= i;
        else s += i;
    }
    cout << s;
    return 0;
}
