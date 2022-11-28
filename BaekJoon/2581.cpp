#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    vector<int> a;

    for (int i = n; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i%j == 0)
            {
                a.push_back(j);
            }
        }
    }
    int sum = 0;
    for (int k = 0 ; k < a.size(); k++)
    {
        sum += a[k];
    }

    cout << sum << "\n";
    cout << a[0] << "\n";


    return 0;
}