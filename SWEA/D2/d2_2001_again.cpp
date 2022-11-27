#include <iostream>
using namespace std;

int main()
{
    int test_case;
    int T;
    
    int N, M;

    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        int map[15][15] = {0,};
        cin >> N >> M;
        for (int i =0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> map[i][j];
            }
        }
        int max = 0;
        for (int i = 0; i < N-M+1; i++)
        {
            for (int j = 0; j < N-M+1; j++)
            {
                int sum = 0;
                for (int k = i; k < i+M; k++)
                {
                    for (int l = j; l < j+M; l++)
                    {
                         sum += map[k][l];
                    }  
                }
                if(sum > max)
                    max = sum;
            }

        }
        cout << "#" << test_case << " " << max << "\n";
    }

    
    return 0;
}