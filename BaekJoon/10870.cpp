#include <iostream>
using namespace std;
int num1, num2, sum;

int fi(int x)
{
	if (x == 0)
		return 0;
	if (x == 1)
		return 1;
	else
	{
		return fi(x - 1) + fi(x - 2);
	}
	
}


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n; cin >> n;

	cout << fi(n);


	return 0;
}

