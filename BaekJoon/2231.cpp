#include <iostream>

using namespace std;


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n, m; cin >> n;

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int num = i;
		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}
		if (sum + i == n)
		{
			res = i;
			break;
		}
	}

	cout << res;




}
