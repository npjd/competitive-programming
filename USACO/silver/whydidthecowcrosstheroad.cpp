#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int b;
    cin>>n>>k>>b;
    int ans = k;
    bool signals[n+1];
    int prefix[n+1];
    for (int i = 0; i < b; i++)
    {
        int broke;
        cin>>broke;
        signals[broke] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i-1]+signals[i];
    }
    for (int i = k; i <= n; i++)
    {
        ans = min(ans, prefix[i] - prefix[i-k]);
    }

    cout<<ans<<endl;
         
}