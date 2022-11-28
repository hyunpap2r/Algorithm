#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int temp; cin >> temp;

        for (int j = 1; j <= temp; j++)
        {
            if(temp%j == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            ans++;
        }
    }

    cout << ans << "\n";


    return 0;
}