#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n;
	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\n";
	}
	return 0;
}

