#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n, m; cin >> n >> m;

	vector<int> arr(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k =j+1 ; k < n; k++)
			{

				if (arr[i] + arr[j] + arr[k] <= m && arr[i] + arr[j] + arr[k] > sum)
				{
					sum = arr[i] + arr[j] + arr[k];
				}
		
			}
		}
	}
	cout << sum;

}

