#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string s, t;

    cin >> s;
    cin >> t;

    int n = s.length();
    int m = t.length();

    vector<vector<int> > dp(n+1, vector<int>(m+1, 0));

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if (s[i-1] == t[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            } 
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    int i = n, j = m;
    string lcs = "";
    

    while (i > 0 && j > 0)
    {
        if (s[i-1] == t[j-1])
        {
            lcs += s[i-1];
            i -= 1;
            j -= 1;
        }
        else if(dp[i-1][j] >= dp[i][j-1]){
            i -= 1;
        }
        else{
            j -=1 ;
        }
    }

    reverse(lcs.begin(), lcs.end());

    cout << lcs << endl;

}