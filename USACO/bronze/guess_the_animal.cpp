#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

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
    for(int i=0;i<N; i++){
        string name;
        int num;
        cin>>name>>num;
        for (int j = 0;  j < num; j++)
        {
            string qual;
            cin>> qual;
            quals[i].insert(qual);
        }    
    }

    for (int i = 0; i < N; i++){
        for (int j = i+1; j <N;j++){
            set<string> set1,set2, finalanswer;
            set1 = quals[i];
            set2 = quals[j];
            merge(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(finalanswer,finalanswer.begin()));
            int finalanswerint = set1.size()+set2.size() -finalanswer.size();
            ans = max(ans,finalanswerint);
        }
    }
    cout<<ans+1<<endl;
}