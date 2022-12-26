#include <iostream>
using namespace std;
int arr[9][9];



int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);
	int max = 0;

	int row = 0;
	int col = 0;


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] >= max)
			{
				max = arr[i][j];
				col = i;
				row = j;
			}
		}
	}


	cout << max << "\n";
	cout << col+1 << " " << row+1 << "\n";


	return 0;
}

