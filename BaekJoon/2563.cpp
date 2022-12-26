#include <iostream>
using namespace std;
int arr[100][100] = { 0, };


int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);
	

	int n; cin >> n;
	int num1, num2;
	for (int i = 0; i < n; i++)
	{
		cin >> num1 >> num2;


		for (int j = num1; j < num1+10; j++)
			for (int k = num2; k < num2 + 10; k++)
			{
				arr[j][k] = 1;
			}
	}

	int max = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			max += arr[i][j];
		}
	}
	cout << max;




	return 0;
}

