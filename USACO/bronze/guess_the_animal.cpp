#include <bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("guess.in","r",stdin);
	freopen("guess.out","w",stdout);
    int N;
    cin>>N;
    int ans =0;
    vector<set<string> > quals;
    quals.resize(N);
    for (int i = 0; i < N; i++)
    {
        string name;
        int K;
        cin>>name>>K;
        for (int j = 0; j < K; j++)
        {
            string qual;
            cin>>qual;
            quals[i].insert(qual);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j<N; j++)
        {
            set<string> s;
            merge(quals[i].begin(),quals[i].end(),quals[j].begin(), quals[j].end(),inserter(s, s.begin()));
            int same = quals[i].size()+quals[j].size()-s.size();
            ans = max(same, ans);
        }
    }
    cout<<ans+1<<endl;
}