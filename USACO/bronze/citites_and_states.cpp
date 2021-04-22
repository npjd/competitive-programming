#include <iostream>
#include <set>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("citystate.in","r",stdin);
	freopen("citystate.out","w",stdout);
    int N;
    cin>>N;
    string cities[N];
    string states[N];
    for (int i = 0; i < N; i++)
    {
        cin>>cities[i]>>states[i];
    }
    
    set< pair<string,string> > pairs;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            string temp = cities[i].substr(0, 2);
            string temp2 = cities[j].substr(0, 2);
            if (temp==states[j] && temp2==states[i])
            {
                pairs.insert(make_pair(temp,states[j]));
            }                        
        }  
    }
    int ans = pairs.size();
    
    cout<<ans<<endl;
}