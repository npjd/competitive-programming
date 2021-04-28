#include <iostream>
#include <vector>
#include <fstream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("photo.in","r",stdin);
	freopen("photo.out","w",stdout);
    int N;
    cin>>N;
    int b[N-1];
    for (int i = 0; i <N-1; i++)
    {
        cin>>b[i];
    }
    for (int i = 1; i < N; i++)
    {
        set<int> seen;
        bool valid = true;
        vector<int> a;
        int num = b[0]-i;
        for (int j = 0; j < N; j++)
        {
            if ((seen.count(num)))
            {
                valid = false;
                break;
            }
            a.push_back(num);
            seen.insert(num);
            num = b[j]-num;      
        }
        if ((seen.count(num)))
        {            
            valid = false;
        }
        if (valid)
        {
            for (int z = 0; z < N; z++)
            {
                cout<<a[z];
                if (z!=N-1)
                {
                    cout<<" ";
                }                
            }
            break;        
        }        
    }        
}