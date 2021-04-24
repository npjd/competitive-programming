#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("outofplace.in","r",stdin);
	freopen("outofplace.out","w",stdout);
    int N;
    int ans = -1;
    cin>>N;
    int cows[N], sortedCows[N];
    for (int i = 0; i < N; i++)
    {
        cin>>cows[i];
        sortedCows[i] = cows[i];
    }
    sort(sortedCows,sortedCows+N);
    for (int i = 0; i < N; i++)
    {
        if (cows[i]!=sortedCows[i])
        {
            ans+=1;
        }     
    }
    cout<<ans<<endl;                
}