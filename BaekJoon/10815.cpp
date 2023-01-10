#include <iostream>
#include <vector>
using namespace std;
int n;
int main()
{
	int n; cin >> n;
	vector<int>arr1(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	int m; cin >> m;
	vector<int>arr2(m);
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < m; i++)
	{
		int cnt = 0;

		for (int j = 0; j < n; j++)
		{
			if (arr2[i] == arr1[j])
			{
				cnt++;
				break;
			}
		}
		if (cnt != 0)
		{
			cout << "1" << " ";
		}
		else
		{
			cout << "0" << " ";
		}
	}

	return 0;
}