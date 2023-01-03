#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int nc[1000000];

int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n; cin >> n;
	int temp;
	vector<int> arr1;
	vector<int> arr2;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr1.push_back(temp);
		arr2.push_back(temp);
	}
	sort(arr1.begin(), arr1.end());
	arr1.erase(unique(arr1.begin(), arr1.end()), arr1.end());

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(arr1.begin(), arr1.end(), arr2[i]) - arr1.begin() << " ";
	}
	
	return 0;
}