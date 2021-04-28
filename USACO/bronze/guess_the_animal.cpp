#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N; 
    vector<set<string> > quals;
    quals.resize(N);
    for (int i = 0; i < N; i++)
    {
        string name;
        int k;
        cin>>name>>k;
        for (int j = 0; j<k; j++)
        {
            string qual;
            cin>>qual;
            quals[i].insert(qual);
        }        
    }
    int ans =0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            set<string> similiarty;
            merge(quals[i].begin(),quals[i].end(),quals[j].begin(),quals[j].end(),inserter(similiarty, similiarty.begin()));
            int temp = quals[i].size()+quals[j].size()-similiarty.size();
            int ans = max(ans,temp);
        }        
    }
    cout<<ans+1<<endl;    
}