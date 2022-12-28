#include <iostream>

using namespace std;

int num[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n; cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		num[temp]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < num[i]; j++)
		{
			cout << i << "\n";
		}
	}

	return 0;
}

