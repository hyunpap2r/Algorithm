#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	
	string arr[8] = { "c=", "c-" , "dz=" , "d-", "lj", "nj", "s=", "z=" };
	
	int idx;
	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			idx = s.find(arr[i]);
			//같은 값 있는 지 체크
			if (idx == -1)
			{
				break;
			}
			s.replace(idx, arr[i].length(), "a");
			// 있다면 글자의 길이만큼 s의 idx 인덱스 번호의 값을 a로 대체
			//(굳이 a가 아니라 다른 값으로도 가능 단, arr배열 안에 있는 글자가 겹치지 않게)
		}
	}
	cout << s.length() << "\\n";
	
	
	return 0;
}
