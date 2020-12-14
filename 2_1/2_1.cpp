//По условию задачи необходимо посчитать сумму N натуральных чисел. Поскольку в условии эти числа не даны, предположим, что они должны вводиться пользователем.
//Для дальнейшей работы с задачей нам понадобятся три переменные:
//n - для обозначения количества чисел, m - для обозначения натуральных чисел, вводимых пользователем, и sum - для посчета суммы этих чисел.
//Для ввода N натуральных чисел b посчета их суммы воспользуемся циклом for от 1 до n. 
//На каждом шаге итерации производится стандартный ввод пользователем числа, а затем это число прибавляется к значению переменной sum.

#include <iostream>
using namespace std;
int n,m,sum=0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        sum += m;
    }
    
    cout << sum;
    return 0;
}
