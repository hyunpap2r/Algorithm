#include <string>
#include <string.h>
#include <iostream>
using namespace std;

int num;

int recursion(const char* s, int l, int r)
{
	num++;
	if (l >= r)
	{
		return 1;
	}
	else if (s[l] != s[r])
	{
		return 0;
	}
	else
	{
		return recursion(s, l + 1, r - 1);
	}

}


int isPalindrome(const char* s)
{
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	freopen_s(new FILE*, "input.txt", "r", stdin);

	int n;  cin >> n;
	string str;


	for (int i = 0; i < n; i++)
	{
		num = 0;
		cin >> str;
		cout << isPalindrome(str.c_str()) << " " << num << "\n";
	}

}