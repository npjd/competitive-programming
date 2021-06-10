#include <iostream>

using namespace std;

int main(){
    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
    long long n;
    int ans = 0;
    cin>>n;
    long long cows[n];
    long long prefix[n+1];

    for (int i = 0; i < n; i++)
    {
        cin>>cows[i];
        prefix[i+1] =(prefix[i]+cows[i])%7;
    }

    int found[n];
    for (int i = 0; i < n; i++)
    {
        found[i] = -1;
    }

    for (int i = 0; i < n+1; i++)
    {
        if (found[prefix[i]]==-1)
        {
            found[prefix[i]] = 1;
        }else
        {
            ans = max(i -found[prefix[i]],ans);
        }                
    }
    cout<<ans<<endl;
    
    
}