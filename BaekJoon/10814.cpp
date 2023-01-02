#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool cmp(pair<int, string>a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n; cin >> n;
	int temp; string str;

	vector<pair<int, string>> arr;
	for (int i = 0; i < n; i++)
	{
		cin >> temp >> str;
		arr.push_back({ temp, str });
	}
	
	stable_sort(arr.begin(), arr.end(),cmp);


	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
	



	return 0;
}