#include <iostream>
#include <vector>
using namespace std;


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n; cin >> n;

	vector<pair<int, int>> arr;
	
	int rank = 1;
	for (int i = 0; i < n; i++)
	{
		int temp; int temp2;
		cin >> temp >> temp2;
		arr.push_back(make_pair(temp, temp2));
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
			{
				rank++;
			}
		}
		cout << rank << " ";
		rank = 1;
	}




	return 0;
}
