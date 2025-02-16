
#include <vector>
#include <iostream>

using namespace std;

void dfs(int i, vector<int> &dp, vector<bool> & vis, vector<vector<int> > &adj)
{
    vis[i] = true;

    int ans = 0;

    for (int j = 0; j < adj[i].size(); j++)
    {
        int nei = adj[i][j];
        if (!vis[nei])
        {
            dfs(nei, dp, vis, adj);
        }
        ans = max(ans, 1 + dp[nei]);
    }

    dp[i] = ans;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> dp(N + 1, 0);

    vector<vector<int> > adj(N + 1, vector<int>(0));

    vector<bool> vis(N + 1, false);

    int x, y;

    for (int i = 0; i < M; i++)
    {

        cin >> x >> y;
        adj[x].push_back(y);
    }

    for (int i = 1; i <= N; i++)
    {
        if (!vis[i])
        {
            dfs(i, dp, vis, adj);
        }
    }

    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
}