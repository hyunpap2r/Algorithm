#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);


	int mean = 0;
	int temp;
	vector<int> arr;
	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		arr.push_back(temp);
		mean += temp;
	}

	sort(arr.begin(), arr.end());

	cout << mean / 5 << "\n";
	cout << arr[2];



	return 0;
}

