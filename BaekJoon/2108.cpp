#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int num[500001];
int cnt[8001];
int n, a, b, c, d;
int sum = 0;

int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		sum += num[i];
		cnt[num[i] + 4000]++;
	}

	sort(num, num +n);

	int flag;
	int max = 0;

	for (int i = 0; i < 8001; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			flag = i;
		}
	}

	for (int i = flag + 1; i < 8001; i++)
	{
		if (cnt[i] == max)
		{
			flag = i;
			break;
		}
	}

	a = round(double(sum) / n);
	b = num[(n - 1) / 2];
	c = flag - 4000;
	d = num[n - 1] - num[0];

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << d << "\n";
}