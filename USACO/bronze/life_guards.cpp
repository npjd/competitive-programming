#include <iostream>
#include <fstream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("lifeguards.in","r",stdin);
	freopen("lifeguards.out","w",stdout);
    int N;
    cin>> N;
    int start[N];
    int end[N];
    for (int i = 0; i < N; i++)
    {
        cin>>start[i]>>end[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int temp = 0;
        int num_line[1001] = {0};
        for (int j = 0; j < N; j++)
        {
            if (j!=i)
            {
                for (int z = start[j]; z < end[j]; z++)
                {
                    num_line[z] =1;
                }                
            }            
        }
        for (int p = 0; p < 1001; p++)
        {
            if (num_line[p]==1)
            {
                temp+=1;
            }            
        }
        ans = max(ans,temp);        
    }  
    cout<<ans<<endl;  
}
