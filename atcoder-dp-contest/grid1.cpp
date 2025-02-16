#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int> > dp(H + 1, vector<int>(W + 1, 0));


    string row;

    for (int i = 1; i < H + 1; i++)
    {
        cin >> row;

        for (int j = 1; j < W + 1; j++)
        {
            if (i == 1 && j ==1)
            {
                dp[i][j] = 1;
                continue;
            }
            
            if (row[j - 1] == '#')
            {
                continue;
            }

            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]);
            dp[i][j] %= (int)(1e9 +7);
        }
    }

    cout << dp[H][W] << endl;
}