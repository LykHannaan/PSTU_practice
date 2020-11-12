#include <iostream>

using namespace std;

int n,m;

int main()
{
  setlocale(LC_ALL, "RUS");  
    cin >> n;
	
	   for (int i=1; i<=n; i++)
	    {
		 for (int i=1; i<=n; i++)
		  {
		   cout << "* "; 
		  }
	     cout << endl;
	    }	
  return 0;
}
