#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, K;
    freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
    cin>>N>>K;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int num = 1;
        for (int j = i+1; j < N; j++)
        {
            if (v[j]-v[i]<=K)
            {
                num+=1;
            }
            else
            {
                break;
            }
        }
        ans = max(ans,num);
    }
    cout<<ans<<endl;
}