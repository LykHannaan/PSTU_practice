#include <iostream>
using namespace std;

int n,sum;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n;
	 while (n > 0)
	 {
		sum += n % 10;
		n /= 10;
	 }
	 cout << sum;
return 0;
}
