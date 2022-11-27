#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n; cin >> n;
	string word;
	int ans = 0;
	
	for (int i = 0; i < n; i++)
	{
		bool isgroup = true; // 그룹단어 체크요소
		cin >> word;
	
		word.erase(unique(word.begin(), word.end()), word.end());
					//연속된 중복값 확인 후 맨 뒤로 보내서 제거

		sort(word.begin(), word.end());
					//그룹단어 체크를 위해 정렬	
		for (int k = 0; k < word.length() - 1; k++) {
			if (word[k] == word[k + 1])
					//연속된 값이 있다면 정렬 전 중복되는 값이 있다는 뜻으로 그룹단어 X
			{
				isgroup = false;
				break;
			}
		}
		if (isgroup) {
			ans++;
		}
	}
	
	cout << ans;
	
	return 0;
}