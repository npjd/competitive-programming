#include <iostream>

using namespace std;

int main()
{

    int N;
    cin >> N;

    double p[N];

    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }

    double dp[N + 1][N + 1];

    dp[0][0] = 1.0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]);
            }
            else
            {

                dp[i][j] = dp[i - 1][j] * (1 - p[i- 1]) + dp[i - 1][j - 1] * p[i - 1];
            }
        }
    }

    double ans = 0;

    for (int i = (N+1) / 2; i <= N; i++)
    {
        ans += dp[N][i];
    }

    cout << ans << endl;
}