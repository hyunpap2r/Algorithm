#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n > m)
	{
		cout << "-1";
		return 0;
	}
	vector<int> a;
	
	for (int i = n; i <= m; i++)
	{	
		int cnt = 0;
		for (int j = 1; j <= m; j++)
		{
			if (i%j == 0)
			{
				cnt++;
				if (cnt > 2)
				{
					break;
				}
			}
		}
		if (cnt == 2)
		{
			a.push_back(i);
		}
	}
	int sum = 0;
	for (int k = 0; k < a.size(); k++)
	{
		sum += a[k];
	}
	
	if (a.size() >= 1)
	{
		cout << sum << "\n";
		cout << a[0] << "\n";
	}
	else
	{
		cout << "-1";
	}
	a.clear();

	return 0;
}
