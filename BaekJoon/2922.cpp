#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int i = 1;
	int count = 1;

	while (n > i)
	{
		i += (6*count);
		count++;
	}

	cout << count;


	return 0;
}
