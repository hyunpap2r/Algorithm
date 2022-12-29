#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	vector<int> arr;
	int n; cin >> n;
	int temp;
	while (n != 0)
	{
		temp = n % 10;
		n /= 10;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end(), greater<>());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}


	return 0;
}