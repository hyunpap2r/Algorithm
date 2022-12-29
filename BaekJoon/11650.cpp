#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n;
	cin >> n;

	vector<pair<int,int>>arr;
	int tempx, tempy;
	
	for (int i = 0; i < n; i++)
	{
		cin >> tempx >> tempy;
		arr.push_back({ tempx, tempy });
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}


	return 0;
}