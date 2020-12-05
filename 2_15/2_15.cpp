#include <iostream>
using namespace std;

int n,z,p,k=0;

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n >> z;
	 while (n > 0)
	 {
		p = n % 10;
		n /= 10;
		if (p == z) k = 1;;
	 }
	  if (k == 1) cout << "Yes";
		else cout << "No";
	 
return 0;
}
